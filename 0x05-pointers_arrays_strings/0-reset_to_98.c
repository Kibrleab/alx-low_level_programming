#include "main.h"
/**
 *  reset_to_98 - Pointer to an int as parameter and updates the value
 * Return: nothing
 * @n: integer to be printed
 * @*p: pointer
 */
void reset_to_98(int *n)
{
	int p;

	p = 402;
	n = &p;
	_putchar(p);
	_putchar('\n');
	*n = 98;
	_putchar(p);
_putchar('\n');
}
