#include <stdio.h>

int main() {
    float l1, l2;

    // pobieranie pierwszej liczby od użytkownika
    printf("Podaj 1 liczbę:\n");
    scanf("%f", &l1);

    // pobieranie drugiej liczby od użytkownika
    printf("Podaj 2 liczbę:\n");
    scanf("%f", &l2);

    // drukowanie sumy dwóch liczb
    printf("Suma: %f\n", l1 + l2);

    // zwrócenie wartości 0, co oznacza poprawne zakończenie programu
    return 0;
}
