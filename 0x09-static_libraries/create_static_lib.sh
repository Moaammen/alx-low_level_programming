#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
ar -crs -s libmy.a *.o

