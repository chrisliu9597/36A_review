#!/usr/bin/bash

gcc -g -Wall -Werror -o sort.out screamingIsort.c
./sort.out
rm sort.out