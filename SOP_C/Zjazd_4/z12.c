#include <stdio.h>

int main() {
    char operator; // Zmienna przechowująca operator (+, -, *, /)
    double liczba1, liczba2, wynik; // Zmienne przechowujące dwie liczby i wynik
    
    printf("Podaj operator (+, -, *, /): ");
    scanf("%c", &operator); // Wczytanie operatora
    
    printf("Podaj dwie liczby: \n");
    scanf("%lf %lf", &liczba1, &liczba2); // Wczytanie dwóch liczb
    
    switch(operator) {
        case '+': // Dodawanie
            wynik = liczba1 + liczba2;
            printf("%.2lf + %.2lf = %.2lf \n", liczba1, liczba2, wynik);
            break;
        case '-': // Odejmowanie
            wynik = liczba1 - liczba2;
            printf("%.2lf - %.2lf = %.2lf \n", liczba1, liczba2, wynik);
            break;
        case '*': // Mnożenie
            wynik = liczba1 * liczba2;
            printf("%.2lf * %.2lf = %.2lf \n", liczba1, liczba2, wynik);
            break;
        case '/': // Dzielenie
            wynik = liczba1 / liczba2;
            printf("%.2lf / %.2lf = %.2lf \n", liczba1, liczba2, wynik);
            break;
        default:
            printf("Błędny operator"); // Wyświetlenie błędu, gdy operator jest niepoprawny
    }
    
    return 0;
}
