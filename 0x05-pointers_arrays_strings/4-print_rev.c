#include "main,h"
/**
 *
 *
 *
 */
void print_rev(char *s)
{
	int x, y, k;
	while (s[x] != '\0')
	{
		x++;
	}
k = x;
	for (y = k-1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
