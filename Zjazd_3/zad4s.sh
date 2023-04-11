#!/bin/bash

# Ładowanie funkcji z pliku funkcje.f
source funkcje.f

# Pętla while, która wywołuje funkcję menu i wykonuje odpowiednie polecenie w zależności od wyboru użytkownika
while true; do
  # Wyświetlenie menu wyboru i pobranie wyboru użytkownika
  wybor=$(menu)

  # Instrukcja case, która w zależności od wyboru użytkownika wykonuje odpowiednie polecenie
  case $wybor in
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
      wolne_miejsce
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