#!/bin/bash

# Pobranie nazwy skryptu
filename=$(basename "$0")

# Sprawdzenie, czy nazwa kończy się na .sh
if [[ $filename =~ \.sh$ ]]; then
  echo "Nazwa skryptu kończy się na .sh"
else
  # Zmiana nazwy skryptu poprzez dopisanie .sh
  new_filename="${filename}.sh"
  mv "$filename" "$new_filename"
  echo "Zmieniono nazwę skryptu na $new_filename"
fi
