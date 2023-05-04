#!/bin/bash

# Wyświetlanie menu wyboru
echo "Menu wyboru:"
echo "c - aktualny katalog"
echo "u - nazwa użytkownika"
echo "h - katalog domowy"
echo "d - wolne miejsce na dysku"
echo "t - aktualny czas"
echo "q - wyjście z programu"

while true; do
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
    d) # Jeśli wybór to "d", wyświetl wolne miejsce na dysku
      df -h
      ;;
    t) # Jeśli wybór to "t", wyświetl aktualny czas
      echo "Aktualny czas: $(date +%T)"
      ;;
    q) # Jeśli wybór to "q", wyjdź z programu
      echo "Do widzenia!"
      exit 0
      ;;
    *) # Jeśli wybór jest inny niż "c", "u", "h", "d", "t" lub "q", wyświetl informację o błędzie
      echo "Błędna opcja wyboru. Wybierz ponownie."
      ;;
  esac
done
