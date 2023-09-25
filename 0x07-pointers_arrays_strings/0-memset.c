#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 *@s: pointer to put the constant
 *@b: constant
 *@n: maximum byte for use
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int m;

	for (m = 0; n > 0; m++, n--)
	{
		s[m] = b;
	}

	return (s);
}
