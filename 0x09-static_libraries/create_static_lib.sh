#!/bin/bash

for file in *.c; do
    if [ -f "$file" ]; then
        gcc -c "$file" -o "${file%.c}.o"
    fi
done

ar rc liball.a *.o

ranlib liball.a
