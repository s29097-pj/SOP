#include <stdio.h>
#include <stdlib.h> // dołączenie biblioteki dla funkcji exit

int main()
{
    int i; // deklaracja zmiennej i typu int

    do // rozpoczęcie pętli do-while
    {
        printf("jaka jest tajna liczba?\n"); // wyświetlenie pytania o liczbę w konsoli
        
        if(scanf("%d", &i) != 1) // warunek sprawdzający, czy użytkownik podał liczbę całkowitą
        {
            printf("Podana wartość nie jest liczbą całkowitą.\n"); // wyświetlenie komunikatu o błędzie w konsoli
            exit(1); // zakończenie działania programu z kodem błędu 1
        }
    } while(i != 6); // warunek kontynuacji pętli

    printf("zezwalam na dostep\n"); // wyświetlenie informacji o dostępie w konsoli

    return 0; // zakończenie programu z kodem wyjścia 0
}
