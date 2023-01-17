#!/bin/bash
gcc -c add.c sub.c mul.c mod.c div.c -o -fpic
gcc add.o sub.c mul.c mod.c div.c -shared -o 100-operations.so
