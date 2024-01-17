#include <main.h>

/**
 * _strspn - write a function that get the length of a prefix
 *
 * @s: source
 * @accept: length
 * Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int mad, sad;

	for (mad = 0; s[mad] != '\0'; mad++)
	{
		for (sad = 0; accept[sad] != s[sad]; sad++)
		{
			if (accept[sad] == '\0')
				return (mad);
		}
	}
	return (mad);
}
