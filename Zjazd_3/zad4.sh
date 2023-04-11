#!/bin/bash

# Wyświetlanie menu wyboru
echo "Menu wyboru:"
echo "c - aktualny katalog"
echo "u - nazwa użytkownika"
echo "h - katalog domowy"

# Pobieranie wyboru użytkownika
read -p "Wybierz opcję: " opcja

# Instrukcja case, która w zależności od wyboru użytkownika wykonuje odpowiednie polecenie
case $opcja in
  c) # Jeśli wybór to "c", wyświetl aktualny katalog
    echo "Aktualny katalog: $(pwd)"
    ;;
  u) # Jeśli wybór to "u", wyświetl nazwę użytkownika
    echo "Nazwa użytkownika: $(whoami)"
    ;;
  h) # Jeśli wybór to "h", wyświetl katalog domowy
    echo "Katalog domowy: $HOME"
    ;;
  *) # Jeśli wybór jest inny niż "c", "u" lub "h", wyświetl informację o błędzie
    echo "Błędna opcja wyboru."
    ;;
esac
