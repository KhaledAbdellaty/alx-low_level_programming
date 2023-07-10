#!/bin/bash
gcc -std=gnu89 -c *.c
ar rcs liball.a *.o
