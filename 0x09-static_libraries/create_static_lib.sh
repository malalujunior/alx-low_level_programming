#!/bin/bash
gcc -wall -wextra -werror -pedentic -c *.c
ar rc liball.a *.o
