#!/bin/bash
# a script to create a dynamc library called liball.so
gcc -Wall -fPIC -c *.c
gcc -shared -o liball.so *.o
