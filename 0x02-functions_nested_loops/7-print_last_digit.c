#include "main.h"
/**
 *print_last_digit Print last digit
 * @z: number
 * Return: Laste digit
 */
int print_last_digit(int z)
{
int ld;
if (z < 0)
       	ld = -1 * (z % 10);
else
	ld = z % 10;
_putchar(ld + '0');
return (ld);
_putchar('\n');
}
