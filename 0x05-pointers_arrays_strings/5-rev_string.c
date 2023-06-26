#include "main.h"
/**
 *
 *
 */
void rev_string(char *s)
{
	int a, p, d;
	chat str;
	p = 0;
	d = 0;
	while (s[p] != '\0')
	{
		p++;
	}
	d = p-1;
	for (a = 0; a <= p/2; a++)
	{
		d = s[a];
		s[a] = s[d];
		s[d--] = str;
	}
}
