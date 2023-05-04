#include <stdio.h> // dołączenie pliku nagłówkowego zawierającego standardowe funkcje wejścia/wyjścia
#include <stdlib.h> // zawiera funkcje dotyczące podstawowych operacji
#include <time.h> // używana do inicjowania generatora liczb pseudolosowych


int main() // funkcja główna, od której rozpoczyna się program
{
	int a,b,ilosc=0,punkty=0,wynik,opcja;
	// deklaracja zmiennych a, b, ilosc, punkty, wynik, opcja jako typu integer (liczbowego całkowitego)
	// ilosc i punkty są inicjowane wartością 0
	srand(time(NULL)); // funkcja inicjująca generator liczb pseudolosowych na podstawie bieżącego czasu

poczatek: // etykieta (tylko jako przykład), do której można skakać za pomocą instrukcji goto
	a=rand()%100+1; // przypisanie do zmiennej a losowej liczby całkowitej z zakresu 1-100
	b=rand()%100+1; // przypisanie do zmiennej b losowej liczby całkowitej z zakresu 1-100
	printf("%d+%d= ?\n",a,b); // wyświetlenie na ekranie sumy a i b
	scanf("%d",&wynik); // pobranie od użytkownika wyniku i zapisanie go do zmiennej wynik

	if(wynik==a+b) // sprawdzenie, czy wpisany wynik jest równy sumie a i b
	{
		printf("brawo!\n"); // wyświetlenie na ekranie gratulacji
		punkty++; // zwiększenie ilości punktów o 1
	}
	else // jeśli wpisany wynik jest inny niż suma a i b
		printf("blad, poprawny wynik to %d\n",a+b); // wyświetlenie na ekranie informacji o poprawnej odpowiedzi

	ilosc++; // zwiększenie ilości pytań o 1
	printf("kontynuowac?1- tak, 2- koniec\n"); // wyświetlenie na ekranie pytania o kontynuację gry
	scanf("%d",&opcja); // pobranie od użytkownika odpowiedzi i zapisanie jej do zmiennej opcja

	if(opcja==1) // jeśli użytkownik wybrał kontynuację gry
		goto poczatek; // skok do etykiety poczatek
	if(opcja==2) // jeśli użytkownik wybrał koniec gry
	{
		printf("Twoj wynik to %d/%d\n",punkty,ilosc); // wyświetlenie na ekranie końcowego wyniku
		exit(1); // zakończenie programu
	}
}
