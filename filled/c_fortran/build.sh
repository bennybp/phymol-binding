#!/bin/sh

gcc -shared -fPIC average.c -o libmymath.so

gfortran -L. main.f90 -L. -lmymath -o f_prog
