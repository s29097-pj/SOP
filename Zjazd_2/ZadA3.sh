#!/bin/bash

# pobierz imię i nazwisko od użytkownika
read -p "Podaj imię i nazwisko: " name

# wyrażenie regularne do sprawdzenia, czy wprowadzone dane są poprawnym imieniem i nazwiskiem
regex="^[A-ZŻŹĆĄĘŚŃŁÓ][a-zżźćąęśńłó]+\s[A-ZŻŹĆĄĘŚŃŁÓ][a-zżźćąęśńłó]+$"

# sprawdź, czy wprowadzone dane pasują do wzorca
if [[ $name =~ $regex ]]
then
    echo "Wprowadzone imię i nazwisko są poprawne."
else
    echo "Wprowadzone imię i nazwisko są niepoprawne."
fi
