#include <stdio.h>
/**
 * main - The numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
int z;
char Lcase;
for (z = '0'; z <= '9';	z++)
{
putchar(z);
}
for (Lcase = 'a'; Lcase <= 'f'; Lcase++)
{
putchar(lcase);
}
putchar('\n');
return (0);
}
