#!/bin/bash

# Nazwa pliku z adresem e-mail
filename="maile.txt"

# Wyrażenie regularne do wyszukiwania adresów e-mail
pattern="[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}"

# Zmienna pomocnicza przechowująca numer linii
line_number=1

# Odczytanie zawartości pliku z adresem e-mail
while IFS= read -r line
do
  # Usunięcie adresów e-mail z pliku
  plik_bez_emaili=$(echo "$line" | sed -E "s/$pattern//g")
  
  # Zapisanie linii bez adresów e-mail do pliku z numerem linii jako prefiksem
  echo "$plik_bez_emaili" >> "plik_bez_emaili_$line_number.txt"
  
  # Zwiększenie numeru linii
  line_number=$((line_number+1))
done < "$filename"

