#include "main.h"
/**
  * print_last_digit - Prints the last digit of a number
  * @z: The number
  *
  * Return: Value of the last digit of number
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
