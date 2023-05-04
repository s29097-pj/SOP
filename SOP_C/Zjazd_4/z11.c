#include <stdio.h>

int main() {
    int n; // liczba liczb do zsumowania
    int liczba; // zmienna pomocnicza przechowująca wprowadzoną liczbę
    int suma = 0; // zmienna przechowująca sumę wprowadzonych liczb

    // prośba o podanie liczby liczb do zsumowania
    printf("Podaj liczbę liczb do zsumowania: ");
    scanf("%d", &n);

    // wczytywanie kolejnych liczb i dodawanie do sumy
    for (int i = 0; i < n; i++) {
        // prośba o podanie i-tej liczby
        printf("Podaj liczbę nr %d: ", i+1);
        scanf("%d", &liczba);

        // dodanie wczytanej liczby do sumy
        suma += liczba;
    }

    // wypisanie wyniku sumowania na standardowe wyjście
    printf("Suma podanych liczb to: %d\n", suma);

    return 0;
}
