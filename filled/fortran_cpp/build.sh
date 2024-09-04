#!/bin/sh

set -eu

# Fortran library
gfortran -o libmymath.so -shared -fPIC math.f90

# C program
g++ main.cpp -o cpp_prog -L. -lmymath
