#include "main.h"
/**
 * print_array - print n elet of array
 * @a: array
 * @n: number of array
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c <= n; c++)
	{
		if (n == 0)
			printf("%d"' a[c]);
			else
			printf(", %d"' a[c]);
	}
		printf("\n");
	}
