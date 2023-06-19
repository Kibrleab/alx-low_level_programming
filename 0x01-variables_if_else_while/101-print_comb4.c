#include <stdio.h>
/**
 * main - All possible different combinations of three digits
 *
 * Return: Always 0
 */
int main(void)
{
int n, m, o;
for (n = '0'; n <= '9'; n++)
{
for (m = '0'; m <= '8'; m++)
{
for (o = '0'; o <= '7'; o++)
{
if (o != m && o != n && m != n)
{
putchar(n);
putchar(m);
putchar(o);
if (!(n == '9' && m == '8' && o == '7'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
