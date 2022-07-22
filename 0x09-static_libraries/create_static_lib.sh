#!/bin/bash
echo "Compiling..."
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar rc liball.a *.o
echo "Complete..."
