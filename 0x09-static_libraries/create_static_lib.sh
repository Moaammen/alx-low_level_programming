#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar -crs -s liball.a *.o

