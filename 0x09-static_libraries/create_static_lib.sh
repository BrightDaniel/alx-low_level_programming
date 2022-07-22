#!/bin/bash
gcc -Wall -c *.c
ar -cvq liball.a *.o
