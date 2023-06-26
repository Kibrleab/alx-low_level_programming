#include "main.h"
/**
 * rev_string - prints every other character of a string
 * @s: pointer to string
 * Return: nothing
 */
void rev_string(char *s)
{
	char str;
	int a, p, d;

	p = 0;
	d = 0;

	while (s[p] != '\0')
	{
		p++;
	}
	d = p - 1;
	for (a = 0; a < p / 2; a++)
	{
		str = s[a];
		s[a] = s[d];
		s[d--] = str;
	}
}
