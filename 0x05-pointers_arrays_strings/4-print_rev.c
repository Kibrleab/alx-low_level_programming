#include "main.h"
/**
 * print_rev - print a sting in revars
 *@s: pointer to string
 *
 */
void print_rev(char *s)
{
	int x, y, k;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	k = x;

	for (y = k - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
