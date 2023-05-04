#include <stdio.h>

// deklaracja funkcji przelicz, która zwraca wartość typu float
float przelicz(float);

int main()
{
    // deklaracja zmiennych dolary i funty typu float
    float dolary, funty;
    
    // wyświetlenie tekstu na ekranie
    printf("podaj kwote w dolarach\n");
    // pobranie wartości wprowadzonej przez użytkownika i przypisanie jej do zmiennej dolary
    scanf("%f", &dolary);
    // wywołanie funkcji przelicz z wartością dolary jako argumentem i przypisanie jej wyniku do zmiennej funty
    funty = przelicz(dolary);
    // wyświetlenie wyniku przeliczenia w formacie z dokładnością do 2 miejsc po przecinku
    printf("%.2f $ to %.2f funta/funtow\n", dolary, funty);
    
    return 0;
}

// definicja funkcji przelicz, która zwraca wartość przeliczonej kwoty z dolarów na funty
float przelicz(float w_dolarach)
{
    return (w_dolarach/1.98);
}
