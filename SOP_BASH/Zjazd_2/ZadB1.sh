#!/bin/bash

# Sprawdzamy liczbę przekazanych parametrów, operator porównania -gt oznacza "większy niż" (greater than)
if [ $# -gt 1 ]; then
  # Jeśli jest więcej niż jeden parametr, wyświetlamy pierwszy
  echo "Pierwszy parametr: $1"
# Operator porównania -eq oznacza "równy" (equal to)
elif [ $# -eq 1 ]; then
  # Jeśli jest dokładnie jeden parametr, wyświetlamy informację o jednym parametrze i jego wartość
  echo "Podano tylko jeden parametr."
  echo "Parametr: $1"
else
  # Jeśli nie ma żadnych parametrów, wyświetlamy odpowiedni komunikat
  echo "Nie podano żadnych parametrów."
fi
