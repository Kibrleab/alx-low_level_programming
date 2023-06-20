#include "main.h"
/**
 * _islower - A program that checks for lowercase characte
 * @c: the character
 * Return:Always 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
else
{
	return (0);
}
}
