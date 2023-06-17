#include <stdio.h>
/**
 * main - The alphabet in lowercase, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
char l = 'a';
while (l <= 'z')
{
putchar(l);
l++;
}

putchar('\n');

return (0);
}
