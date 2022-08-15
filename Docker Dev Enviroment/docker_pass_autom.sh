#!/bin/sh

# Sets up a docker credential helper so docker login credentials are not stored encoded in base64 plain text.
# Uses the pass secret service as the credentials store.
# If previously logged in w/o cred helper, docker logout <registry> under each user or remove ~/.docker/config.json.

# Tested on Ubuntu 18.04.5 LTS.

if ! [ $(id -u) = 0 ]; then
   echo "This script must be run as root"
   exit 1
fi

echo "Installing dependencies"
apt update && apt-get -y install gnupg2 pass rng-tools jq

# Check for later releases at https://github.com/docker/docker-credential-helpers/releases
version="v0.6.3"
archive="docker-credential-pass-$version-amd64.tar.gz"
url="https://github.com/docker/docker-credential-helpers/releases/download/$version/$archive"

# Download cred helper, unpack, make executable, and move it where Docker will find it.
wget $url \
    && tar -xf $archive \
    && chmod +x docker-credential-pass \
    && mv -f docker-credential-pass /usr/local/bin/

# Done with the archive
rm -f $archive

config_path=~/.docker
config_filename=$config_path/config.json

# Could assume config.json isn't there or overwrite regardless and not use jq (or sed etc.)
# echo '{ "credsStore": "pass" }' > $config_filename

if [ ! -f $config_filename ]
then
    if [ ! -d $config_path ]
    then
        mkdir -p $config_path
    fi

    # Create default docker config file if it doesn't exist (never logged in etc.). Empty is fine currently.
    cat > $config_filename <<EOL
{
}
EOL
    echo "$config_filename created with defaults"
else
    echo "$config_filename already exists"
fi

# Whether config is new or existing, read into variable for easier file redirection (cat > truncate timing)
config_json=`cat $config_filename`

if [ -z "$config_json" ]; then
    # Empty file will prevent jq from working
    $config_json="{}"
fi

# Update Docker config to set the credential store. Used sed before but messy / edge cases.
echo "$config_json" | jq --arg credsStore pass '. + {credsStore: $credsStore}' > $config_filename

# Output / verify contents
echo "$config_filename:"
cat $config_filename | jq

# Help with entropy to prevent gpg2 full key generation hang
# Feeds data from a random number generator to the kernel's random number entropy pool
rngd -r /dev/urandom

# To cleanup extras from multiple runs: gpg --delete-secret-key <key-id>; gpg --delete-key <key-id>
echo "Generating GPG key, accept defaults but consider key size to 2048, supply user info"
gpg2 --full-generate-key

echo "Adjusting permissions"
sudo chown -R $USER:$USER ~/.gnupg
sudo find ~/.gnupg -type d -exec chmod 700 {} \;
sudo find ~/.gnupg -type f -exec chmod 600 {} \;

# List keys
gpg2 -k

key=$(gpg2 --list-secret-keys | grep uid -B 1 | head -n 1 | sed 's/^ *//g')

echo "Initializing pass with key $key"
pass init $key

echo "Enter a password to add to the secure store"
pass insert docker-credential-helpers/docker-pass-initialized-check

# Just a verification. Don't need to show actual password, mask it.
echo "Password verification:"
pass show docker-credential-helpers/docker-pass-initialized-check | sed -e 's/\(.\)/\*/g'

echo "Docker credential password list (empty initially):"
docker-credential-pass list

echo "Done. Ready to test. Run: sudo docker login <registry>"
echo "Afterwards run: sudo docker-credential-pass list; sudo cat ~/.docker/config.json"
