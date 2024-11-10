FROM ubuntu:24.04

RUN apt-get update \
  && apt-get install -y \
    git \
    cmake \
    gcc-12 \
    g++-12 \
    gdb \
    libgmp-dev \
    libboost-system-dev \
    libboost-filesystem-dev \
    libboost-iostreams-dev \
    libeigen3-dev \
  && rm -rf /var/lib/apt/lists/*

RUN update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-12 100 \
  && update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-12 100

WORKDIR /workspace

ENTRYPOINT ["/bin/bash"]
