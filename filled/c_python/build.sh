#!/bin/sh

set -eu

gcc -shared -fPIC average.c -o libmymath.so
