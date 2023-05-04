#!/bin/bash

# Funkcja wyświetlająca menu i pobierająca wybór użytkownika
function menu {
    echo
	echo "Menu wyboru:"
    echo "c - aktualny katalog"
    echo "u - nazwa użytkownika"
    echo "h - katalog domowy"
    echo "d - wolne miejsce na dysku"
    echo "t - aktualny czas"
    echo "q - wyjście z programu"
	echo
}

# funkcja odczytująca wybór użytkownika
function wybor() {
  read -p "Wybierz opcję: " option
  echo "$option"
}