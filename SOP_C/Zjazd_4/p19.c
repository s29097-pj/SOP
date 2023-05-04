#include <stdio.h>

int main()
{
	// Deklaracja zmiennej i typu całkowitego
	int i;

	// Pętla for iterująca przez liczby od 17 do 100 włącznie
	for(i=17; i<=100; i++)
	{ 
		// Warunek sprawdzający, czy liczba jest podzielna przez 17
		if(i%17 == 0)
			// Jeśli liczba jest podzielna przez 17, wyświetl ją na ekranie
			printf("%d ", i);
	}

	// Po zakończeniu pętli, przejdź do nowej linii
	printf("\n");
	
	// Zwróć wartość 0, aby wskazać, że program zakończył się poprawnie
	return 0;
}
