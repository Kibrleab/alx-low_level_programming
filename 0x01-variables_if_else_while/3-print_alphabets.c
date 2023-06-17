#include <stdio.h>
/**
 * main - The alphabet in lowercase, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
char l = 'a', u = 'A';
while (l <= 'z')
{
putchar(l);
l++;
}

putchar('\n');
while (u <= 'Z')
{
putchar(u);
u++;
}
return (0);
}
