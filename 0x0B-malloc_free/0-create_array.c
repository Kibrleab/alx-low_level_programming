#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars, and initializes it w/ a char
 * @size: input size of array
 * @c: initializing char
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *pstr;
	unsigned int i;

	pstr = malloc(sizeof(char) * size);
if (size == 0 ||pstr == NULL)
	return (NULL);
i = 0;
while (i < size)
{
	pstr[i] = c;
	i++;
}
	return (pstr);
	}
