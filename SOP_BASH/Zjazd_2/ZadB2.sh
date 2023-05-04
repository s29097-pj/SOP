#!/bin/bash

# Sprawdzanie czy plik SOP_display.sh istnieje w bieżącym katalogu
if [ -f "./SOP_display.sh" ]
then
    # Wykonanie pliku SOP_display.sh
    echo "Wykonuję plik SOP_display.sh"
    bash SOP_display.sh
# Jeśli plik SOP_display.sh nie istnieje, to sprawdzamy czy podano argument
elif [ "$#" -eq 1 ]
then
    # Wykonanie pliku o nazwie takiej jak wartość argumentu
    echo "Wykonuję plik o nazwie $1"
    bash "$1"
# Jeśli nie istnieje plik SOP_display.sh i nie podano argumentu, to wyświetlamy komunikat o błędzie
else
    echo "Błąd: Brak pliku SOP_display.sh lub podano złą liczbę argumentów"
fi
