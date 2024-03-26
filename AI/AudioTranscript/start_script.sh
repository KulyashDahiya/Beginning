#!/bin/bash

# Install software-properties-common
apt install software-properties-common -y

# Add the deadsnakes PPA
add-apt-repository ppa:deadsnakes/ppa -y

# Update apt
apt update

# Install Python 3
apt install python3 -y

# Update apt and install ffmpeg
apt update && apt install ffmpeg -y

# Install Python packages via pip
pip install -U openai-whisper setuptools-rust pydub