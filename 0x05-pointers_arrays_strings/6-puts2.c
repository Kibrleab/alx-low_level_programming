#include "main.h"
/**
 * puts2 - nt every other character
 *@*str: pointer
 *@l: frist int
 @i second int
 */
void puts2(char *str)
{
	int l, i;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
