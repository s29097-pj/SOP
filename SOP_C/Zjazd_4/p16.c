#include <stdio.h>

void wyp_licz(int); // Deklaracja funkcji wyp_licz

int main()
{
    int liczba;

    printf("Podaj liczbe calkowita: \n"); // Wyświetla komunikat dla użytkownika
    scanf("%d", &liczba); // Odczytuje liczbę wprowadzoną przez użytkownika i przypisuje ją do zmiennej liczba
    wyp_licz(liczba); // Wywołuje funkcję wyp_licz i przekazuje jej wartość liczba jako argument

    return 0; // Informuje system operacyjny, że program zakończył się poprawnie
}

void wyp_licz(int liczba)
{
    printf("Podana liczba wynosi: %d\n", liczba); // Wyświetla wartość liczba, którą otrzymała jako argument
}
