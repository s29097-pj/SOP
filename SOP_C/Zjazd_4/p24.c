#include <stdio.h>   // nagłówek zawierający definicje standardowych funkcji wejścia/wyjścia
#include <stdlib.h>  // nagłówek zawiera prototypy funkcji srand() i rand()
#include <time.h> // nagłówek zawiera prototyp funkcji time()

int main()              // funkcja główna, typ zwracany domyślnie to int
{
    int a, b, wynik, i, punkty = 0;   // deklaracja zmiennych typu int, wartość punkty jest inicjalizowana na 0
    srand(time(NULL));                // inicjalizacja generatora liczb pseudolosowych na podstawie czasu

    printf("przed Toba 20 losowych pytan\n");  // wyświetlenie komunikatu na standardowe wyjście
    for (i = 0; i < 20; i++)                    // pętla for wykonująca 20 iteracji
    {
        a = rand() % 10 + 1;                   // wylosowanie liczby całkowitej z przedziału 1-10 i przypisanie do zmiennej a
        b = rand() % 10 + 1;                   // wylosowanie liczby całkowitej z przedziału 1-10 i przypisanie do zmiennej b
        printf("%d*%d= ?\n", a, b);            // wyświetlenie pytania na standardowe wyjście
        scanf("%d", &wynik);                   // pobranie odpowiedzi od użytkownika i przypisanie do zmiennej wynik

        if (wynik == a * b)                     // sprawdzenie poprawności odpowiedzi
        {
            printf("brawo!\n");                // wyświetlenie komunikatu na standardowe wyjście
            punkty++;                           // zwiększenie liczby punktów
        }
        else
        {
            printf("blad, poprawny wynik to %d\n", a * b);  // wyświetlenie poprawnej odpowiedzi na standardowe wyjście
        }
    }

    printf("zdobyles %d punktow na 20 mozliwych\n", punkty);  // wyświetlenie liczby punktów na standardowe wyjście

    // wyświetlenie odpowiedniej oceny na podstawie liczby zdobytych punktów
    if (punkty >= 0 && punkty <= 4)
        printf("dostajesz 1\n");
    else if (punkty > 4 && punkty <= 8)
        printf("dostajesz 2\n");
    else if (punkty > 8 && punkty <= 12)
        printf("dostajesz 3\n");
    else if (punkty > 12 && punkty <= 16)
        printf("dostajesz 4\n");
    else if (punkty > 16 && punkty <= 20)
        printf("dostajesz 5\n");

    return 0;  // zwrócenie wartości 0, oznaczającej poprawne zakończenie programu
}
