#!/bin/bash

# zliczamy liczbe plików w bieżącym katalogu, używając ls i wc
count=$(ls -1 | wc -l)

# sprawdzamy, czy liczba plików jest większa niż 5, używając operatora -gt (greater than)
if [ $count -gt 5 ]; then
  echo "W bieżącym katalogu jest więcej niż 5 plików."
fi
