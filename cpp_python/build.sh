#!/bin/sh

set -eu

# The include for CONDA_PREFIX is needed for pybind11
g++ -shared -fPIC \
     -I./cppmol \
     cppmol/*.cpp -o cppmol.so
