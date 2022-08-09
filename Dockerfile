#!not working missing commands
#todo script call 

#debian linux, python 3.9 image
FROM ubuntu:22.04

#working directory declaration
WORKDIR /code

#quartus instalation 
#ADD Quartus-lite-20.1.1.720-linux.tar /quartus	
#ADD eclipse-cpp-mars-2-linux-gtk-x86_64.tar.gz /
#RUN /quartus/setup.sh --mode unattended --accept_eula 1 --installdir /opt/quartus && \
#	(cd /opt/quartus/nios2eds/bin && mv /eclipse ./eclipse_nios2 && tar xfz eclipse_nios2_plugins.tar.gz)

#COPY --from=install /opt/quartus /opt/quartus
#litex dependencies
ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get -y update && \
    apt-get install -y \
        git \
        python3 \
        python3-setuptools \
        pip \
        wget \
        tar \
        automake \
        apparmor \
        apturl \
        autoconf \
        make \
        gzip && \
    rm -rf /var/lib/apt/lists/*
#requirement instalation 
COPY requirements.txt ./
RUN pip install --no-cache-dir -r requirements.txt

ENV LITEX_VERSION 7789e1875a5f108cc709a8b57f4dd9c3ba860fa7

RUN mkdir litex && \
    cd litex && \
    wget https://raw.githubusercontent.com/enjoy-digital/litex/${LITEX_VERSION}/litex_setup.py && \
    python3 litex_setup.py init install

#copy code directories
COPY . .

#CMD [ "python", "./your-daemon-or-script.py" ]

