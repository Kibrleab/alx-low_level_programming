#include "main.h"
/**
 *_puts - unction that prints a string
 *@str: pointer
 *Return: nothing
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
	_putchar(i);
}
_putchar('\n');
}
