#!/bin/bash

# pętla while, która będzie działać dopóki użytkownik nie wprowadzi poprawnego kodu pocztowego
while true; do
    # prośba o wprowadzenie kodu pocztowego
    read -p "Wprowadź kod pocztowy: " kod_pocztowy
    # sprawdzenie, czy wprowadzony ciąg jest poprawnym kodem pocztowym za pomocą wyrażenia regularnego
    if [[ $kod_pocztowy =~ ^[0-9]{2}-[0-9]{3}$ ]]; then
        # jeśli wprowadzony ciąg jest poprawnym kodem pocztowym, wyświetlenie komunikatu z potwierdzeniem i wyjście z pętli
        echo "Wprowadzony kod pocztowy ($kod_pocztowy) jest poprawny."
        break
    else
        # jeśli wprowadzony ciąg nie jest poprawnym kodem pocztowym, wyświetlenie komunikatu i prośba o ponowne wprowadzenie kodu pocztowego
        echo "Wprowadzony ciąg nie jest poprawnym kodem pocztowym. Spróbuj ponownie."
    fi
done
