#!/bin/bash

# This command will compile all .c files to objects .o files'
gcc -c *.c

# This one will archive objects .o file in a single static library
ar -rcs liball.a *.c
