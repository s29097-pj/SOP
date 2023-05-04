#include <stdio.h>

int main()
{
    // Deklaracja zmiennych a i b typu float oraz zmiennej opcja typu int
    float a, b;
    int opcja;

    // Wyświetlenie tekstu na ekranie i wczytanie wartości z klawiatury do zmiennej a
    printf("podaj liczbe a\n");
    scanf("%f", &a);

    // Wyświetlenie tekstu na ekranie i wczytanie wartości z klawiatury do zmiennej b
    printf("podaj liczbe b\n");
    scanf("%f", &b);

    // Wyświetlenie tekstu na ekranie i wczytanie wartości z klawiatury do zmiennej opcja
    printf("wybierz operacje:\n1- suma, 2- iloczyn\n");
    scanf("%d", &opcja);

    // Sprawdzenie warunku i wyświetlenie wyniku sumy lub iloczynu zmiennych a i b
    if (opcja == 1)
    {
        printf("suma wynosi %f\n", a + b);
    }
    else if (opcja == 2)
    {
        printf("iloczyn wynosi %f\n", a * b);
    }

    return 0; // Zakończenie funkcji main i zwrócenie wartości 0
}
