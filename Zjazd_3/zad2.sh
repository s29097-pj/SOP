#!/bin/bash

echo "program nazywa sie: $0" # wyświetlamy nazwę programu

echo "param 1: $1" # wyświetlamy pierwszy parametr
echo "param 2: $2" # wyświetlamy drugi parametr
echo "param 3: $3" # wyświetlamy trzeci parametr
echo "param 4: $4" # wyświetlamy czwarty parametr
echo "param 5: $5" # wyświetlamy piąty parametr
echo "param 6: $6" # wyświetlamy szósty parametr
echo "param 7: $7" # wyświetlamy siódmy parametr
echo "param 8: $8" # wyświetlamy ósmy parametr
echo "param 9: $9" # wyświetlamy dziewiąty parametr

shift 9 # przesuwamy pozostałe parametry o 9 pozycji, aby wypisać je w pętli

count=1 # licznik do numerowania pozostałych parametrów
for arg in "$@"; do # iterujemy przez pozostałe parametry
    echo "param $((count+9)): $arg" # wyświetlamy kolejny parametr
    ((count++)) # zwiększamy licznik
done

echo "param*: $@" # wyświetlamy wszystkie parametry
echo "param#: $#" # wyświetlamy liczbę parametrów
echo "proc PID: $$" # wyświetlamy numer PID procesu, który uruchomił skrypt
