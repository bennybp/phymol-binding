#!/bin/sh

set -eu

# Need the include directories and libraries
PYTHON_INCLUDES=$(python3-config --includes)
PYTHON_LDFLAGS=$(python3-config --ldflags)


# The include for CONDA_PREFIX is needed for pybind11
g++ -shared -fPIC \
     -I./cppmol \
     -I${CONDA_PREFIX}/include \
     ${PYTHON_INCLUDES} \
     ${PYTHON_LDFLAGS} \
     cppmol/*.cpp -o cppmol.so
