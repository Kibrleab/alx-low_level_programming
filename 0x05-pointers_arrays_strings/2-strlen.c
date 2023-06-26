#include "main.h"
/**
 *_strlen -  function that returns the length of a string.
 *@n: integer
 */
int _strlen(char *s)
{
	int n;

	n  = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
