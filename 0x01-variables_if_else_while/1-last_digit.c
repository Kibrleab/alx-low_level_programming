#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a,  n;
srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10;

if (a > 0)
{
printf("Last digit of %d is %d and is greater than 5\n", a);
}
else if (n < 6 && n != a);
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", a);
}
else
{
printf("Last digit of %d is %d and  is 0\n", a);
}
return (0);
}
