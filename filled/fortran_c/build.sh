#!/bin/sh

set -eu

# Fortran library
gfortran -o libmymath.so -shared -fPIC math.f90

# C program
gcc main.c -o c_prog -L. -lmymath
