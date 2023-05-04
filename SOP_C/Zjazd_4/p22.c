#include <stdio.h>   // nagłówek do obsługi standardowego wejścia/wyjścia
#include <math.h>    // nagłówek do matematycznych funkcji, takich jak sin i cos

int main()
{
	float kat;        // deklaracja zmiennej kat typu float
	int opcja;        // deklaracja zmiennej opcja typu int
	printf("ile stopni ma kat?\n");     // wyświetla na ekranie pytanie o wartość kąta
	scanf("%f",&kat);                   // pobiera wartość kąta wprowadzoną przez użytkownika i przypisuje ją do zmiennej kat
	printf("1- sinus, 2- cosinus\n");   // wyświetla na ekranie instrukcję wyboru opcji
	scanf("%d",&opcja);                 // pobiera wartość wybranej opcji i przypisuje ją do zmiennej opcja
	switch(opcja)   // instrukcja warunkowa switch
	{ 
		case 1:     // jeśli opcja to 1
			printf("sin %f stopni=%.3f\n",kat,sin(kat/180*M_PI));     // oblicza i wyświetla sinus kąta
			break;  // przerwij switch
		case 2:     // jeśli opcja to 2
			printf("cos %f stopni=%.3f\n",kat,cos(kat/180*M_PI));     // oblicza i wyświetla cosinus kąta
			break;  // przerwij switch
		default:    // jeśli opcja to inna liczba niż 1 lub 2
			printf("blad\n");       // wyświetl na ekranie informację o błędzie
	}
	return 0;   // zakończ program i zwróć wartość 0
}
