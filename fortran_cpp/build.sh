#!/bin/sh

set -eu

# Fortran library
gfortran -o libmymath.so -shared -fPIC math.f90
