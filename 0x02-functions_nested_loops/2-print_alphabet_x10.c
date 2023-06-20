#include "main.h"
/**
 * print_alphabet_x10 - Alphabet in lowercase
 *
 * Return:Always 0
 */
void print_alphabet_x10(void)
{
int l, k;
for (l = 0; l < 10; l++)
{
for (k = 97; k <= 122; k++)
{
	_putchar(k);
}

_putchar('\n');
}
}
