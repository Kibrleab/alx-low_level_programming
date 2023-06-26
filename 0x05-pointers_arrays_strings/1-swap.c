#include "main.h"
/**
 * swap_int - unction that swaps the values of two integers.
 * @a: the firest num
 * @b: the second num
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
