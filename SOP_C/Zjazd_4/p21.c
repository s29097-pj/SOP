#include <stdio.h>

int main() // main powinno zwracać int, ponieważ jest to standard C
{
    int i;
    printf("Liczby nieparzyste z przedziału 1-100:\n"); // wypisanie informacji o przedziale liczb
    for(i = 1; i <= 100; i++) // pętla iterująca po liczbach od 1 do 100
    {
        if(i % 2 == 0) // sprawdzenie, czy liczba jest parzysta
            continue; // jeśli tak, to przejście do kolejnej iteracji pętli
        printf("%d ", i); // wypisanie liczby nieparzystej
    }
    printf("\n"); // wypisanie znaku nowej linii
    
    return 0; // zwrócenie wartości 0, oznaczającej poprawne zakończenie programu
}
