# Copyright 2021 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# This Dockerfile only contains the tools needed to run the `checkers.sh`
# build. The specific Linux distro and version don't really matter much, other
# than to the extent that certain distros offer certain versions of software
# that the build needs. It's fine to add more deps that are needed by the
# `checkers.sh` build.
FROM fedora:40
ARG NCPU=4
ARG ARCH=amd64

RUN dnf makecache && \
    dnf install -y \
        cargo \
        cmake \
        clang-tools-extra \
        diffutils \
        findutils \
        gcc-c++ \
        git \
        moreutils \
        patch \
        python-pip \
        ShellCheck

RUN cargo install typos-cli --version 1.24.1 --root /usr/local

RUN curl -L -o /usr/bin/buildifier https://github.com/bazelbuild/buildtools/releases/download/v6.4.0/buildifier-linux-amd64 && \
    chmod 755 /usr/bin/buildifier

RUN curl -L -o /usr/local/bin/shfmt https://github.com/mvdan/sh/releases/download/v3.4.3/shfmt_v3.4.3_linux_${ARCH} && \
    chmod 755 /usr/local/bin/shfmt

RUN pip3 install --upgrade pip
RUN pip3 install cmake_format==0.6.13
RUN pip3 install black==22.3.0
RUN pip3 install mdformat==0.7.19 \
                 mdformat-gfm==0.3.7 \
                 mdformat-frontmatter==2.0.8 \
                 mdformat-footnote==0.1.1

RUN curl -o /usr/bin/bazelisk -sSL "https://github.com/bazelbuild/bazelisk/releases/download/v1.24.1/bazelisk-linux-${ARCH}" && \
    chmod +x /usr/bin/bazelisk && \
    ln -s /usr/bin/bazelisk /usr/bin/bazel
