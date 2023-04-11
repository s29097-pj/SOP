#!/bin/bash

# Funkcja menu, która wyświetla menu wyboru i pobiera wybór użytkownika
function menu {
  # Wyświetlanie menu wyboru
  echo "Menu wyboru:"
  echo "c - aktualny katalog"
  echo "u - nazwa użytkownika"
  echo "h - katalog domowy"
  echo "d - wolne miejsce na dysku"
  echo "t - aktualny czas"
  echo "q - wyjście z programu"

  # Pobieranie wyboru użytkownika
  read -p "Wybierz opcję: " wybor
  echo $wybor
}

# Funkcja sprawdzająca wolne miejsce na dysku
function wolne_miejsce {
  df -h
}

# Dodanie funkcji do listy funkcji, które są dostępne z poziomu innych skryptów
export -f menu
export -f wolne_miejsce