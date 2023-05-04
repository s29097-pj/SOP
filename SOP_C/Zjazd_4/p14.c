#include <stdio.h> // dołączenie biblioteki standardowej dla języka C

int main()
{
	float w,l,h; // deklaracja zmiennych w, l, h typu float (liczby zmiennoprzecinkowe)
	
	printf("jednostki musza byc zgodne!\n"); // wyświetlenie tekstu na ekranie
	printf("podaj szerokosc prostopadloscianu: \n"); // wyświetlenie tekstu na ekranie
	scanf("%f", &w); // wczytanie wartości z klawiatury i przypisanie do zmiennej w
	printf("podaj dlugosc prostopadloscianu: \n"); // wyświetlenie tekstu na ekranie
	scanf("%f", &l); // wczytanie wartości z klawiatury i przypisanie do zmiennej l
	printf("podaj wysokosc prostopadloscianu: \n"); // wyświetlenie tekstu na ekranie
	scanf("%f", &h); // wczytanie wartości z klawiatury i przypisanie do zmiennej h
	printf("objetosc wynosi: %f j^3\n", w*l*h); // wyświetlenie wyniku obliczenia objętości prostopadłościanu
	// z wykorzystaniem wartości wczytanych z klawiatury i formatowania tekstu

	return 0; // zwrócenie wartości 0, oznaczającej poprawne zakończenie programu
}
