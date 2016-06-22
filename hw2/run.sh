#!/bin/bash

gcc main.c

ARG1=$(python -c 'print("A"*79)')
ARG2=$(python -c 'print("A"*79)')
ARG1=$(python -c 'print("A"*800)')
ARG2=$(python -c 'print("A"*800)')

./a.out  $ARG1 $ARG2

