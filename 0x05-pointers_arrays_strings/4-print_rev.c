#include "main,h"
/**
 *
 *
 *
 */
void print_rev(char *s)
{
	int x, y;
	while (s[x] != '\0')
	{
		x++;
	}

	for (y = x-1; >=x; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
