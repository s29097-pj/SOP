#!/bin/bash

# Sprawdzenie, czy plik istnieje w bieżącym katalogu
if [ -e "$1" ]; then
  echo "W bieżącym folderze jest plik $1"
else
  echo "W bieżącym folderze nie ma pliku $1"
fi

# Kod ten używa warunkowego polecenia if, aby sprawdzić, czy plik istnieje w bieżącym katalogu. 
# Funkcja -e służy do sprawdzenia, czy plik istnieje. 
# Jeśli plik istnieje, program wyświetli komunikat "W bieżącym folderze jest plik [nazwa_pliku]", 
# a jeśli plik nie istnieje, program wyświetli komunikat "W bieżącym folderze nie ma pliku [nazwa_pliku]".

# Aby uruchomić ten program, należy go zapisać jako plik zad3.sh w bieżącym katalogu, 
# a następnie wywołać go, podając nazwę pliku jako argument:

# $ bash zad3.sh maile.txt
# W bieżącym folderze jest plik maile.txt

# $ bash zad3.sh mailer.txt
# W bieżącym folderze nie ma pliku mailer.txt