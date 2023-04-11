#!/bin/bash

# Ładowanie funkcji z pliku funkcje.f
source funkcje.f

# Pętla nieskończona wykorzystywana do wyświetlania menu i pobierania wyboru użytkownika
while true; do

  # Wyświetlenie menu
  menu
  option=$(wybor)
  
  # Pętla do wykonania odpowiedniej akcji w zależności od wyboru użytkownika
  
  if [ "$option" == "c" ]; then
	echo "Aktualny katalog: $(pwd)"
  elif [ "$option" == "u" ]; then
	echo "Nazwa użytkownika: $(whoami)"
  elif [ "$option" == "h" ]; then
    echo "Katalog domowy: $HOME"
  elif [ "$option" == "d" ]; then
	echo "Wolne miejsce na dysku:" 
	df -h # Wolne miejsce na dysku
  elif [ "$option" == "t" ]; then
	echo "Aktualny czas: $(date +%T)"
  elif [ "$option" == "q" ]; then
    echo "Do widzenia!"
    break # Wyjście z programu
  else
    echo "Błędna opcja wyboru. Wybierz ponownie."
  fi
done