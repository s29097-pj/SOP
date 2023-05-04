#include <stdio.h>

int main()
{
	// Deklaracja zmiennej a typu char
	char a;

	// Wyświetlenie komunikatu proszącego użytkownika o podanie litery
	printf("Podaj literę: ");

	// Wczytanie znaku z klawiatury do zmiennej a
	scanf("%c", &a);

	// Pętla while, która będzie wykonywać się dopóki wartość zmiennej a nie będzie równa 0
	while (a != 0)
	{
		// Wyświetlenie kropki
		printf(".");

		// Zmniejszenie wartości zmiennej a o 1
		a--;
	}

	// Wyświetlenie znaku nowej linii
	printf("\n");
	
	// Zwrócenie wartości 0, co oznacza poprawne wykonanie programu
	return 0;
}
