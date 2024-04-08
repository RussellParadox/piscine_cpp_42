#!/bin/bash

./PmergeMe 3 5 9 7 4
./PmergeMe `shuf -i 1-100000 -n 3000 | tr "\n" " "`
./PmergeMe "-1" "2"
