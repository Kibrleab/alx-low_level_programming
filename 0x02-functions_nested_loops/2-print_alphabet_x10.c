#include "main.h"
/**
 * print_alphabet_x10 - Alphabet in lowercase
 *
 * Return:Always 0
 */
void print_alphabet_x10(void)
{
int k;
for (k = 97; k <= 122; k++)
{
	_putchar(10 * k);
}
_putchar('\n');
}
