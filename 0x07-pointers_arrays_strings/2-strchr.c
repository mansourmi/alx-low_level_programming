#include "main.h"

/**
 * *_strchr - function that fill with a constant byte.
 * @s: pointer to put the constant
 * @c: constant
 * Return: pointer to s
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\n' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\n');
}
