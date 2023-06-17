#include <stdio.h>
/**
 * main - The alphabet in lowercase, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
char l = 'z';
while (l >= 'a')
{
putchar(l);
l--;
}

putchar('\n');

return (0);
}
