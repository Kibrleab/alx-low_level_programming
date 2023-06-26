#include "main.h"
/**
 * puts_half - prints half of a string
 *@str: pointer to string
 */
void puts_half(char *str)
{
	int odd, j, i;

odd = 0;

	while (str[odd] != '\0')
	{
		odd++;
	}
	if (odd % 2 == 0)
	{
		for (i = odd / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (odd % 2)
	{
		for (j = (odd - 1) / 2; j < odd - 1; j++)
			_putchar(str[j + 1]);
	}
_putchar('\n');
}
