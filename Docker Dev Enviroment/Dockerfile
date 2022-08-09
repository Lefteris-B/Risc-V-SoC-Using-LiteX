#!not working missing commands
#todo script call 

#debian linux, python 3.9 image
FROM ubuntu:22.04

#working directory declaration
WORKDIR /code

#quartus instalation 
#ADD Quartus-lite-20.1.1.711-linux.tar /quartus	
#RUN /quartus/setup.sh --mode unattended --accept_eula 1 --installdir /opt/quartus 
#COPY --from=build /opt/quartus /opt/quartus
#CMD ["/opt/quartus/quartus/bin/quartus", "--64bit"]
#litex dependencies
ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get -y update && \
    apt-get install -y \
        git \
        python3 \
        python3-setuptools \
        autotools-dev \
        curl \
        libmpc-dev \
        libmpfr-dev \
        libgmp-dev \
        gawk \
        build-essential \
        bison \
        flex \
        texinfo \
        gperf \
        libtool \
        patchutils \
        bc \
        zlib1g-dev \
        libexpat-dev \
        pip \
        wget \
        tar \
        automake \
        apparmor \
        apturl \
        autoconf \
        libevent-dev \
        libjson-c-dev \
        verilator \
        make \
        gcc-riscv64-linux-gnu \
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
#CMD litex-boards/litex-boards/targets/terasic_de10l.py --build --load
#CMD [ "python", "./your-daemon-or-script.py" ]

