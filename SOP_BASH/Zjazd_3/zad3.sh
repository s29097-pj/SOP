#!/bin/bash

# Sprawdzenie, czy plik istnieje w bieżącym katalogu
if [ -e "$1" ]; then
  echo "W bieżącym folderze jest plik $1"
else
  echo "W bieżącym folderze nie ma pliku $1"
fi