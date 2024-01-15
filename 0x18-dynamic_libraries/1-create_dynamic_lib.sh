#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu99 -fPIC -c *.c
gcc -shared -o liball.so *.o
