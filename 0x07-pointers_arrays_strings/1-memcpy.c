#include "main.h"

/**
 * *_memcpy - function that copy memory area
 * @dest: memory area
 * @src: source
 * @n: length of area to be copied
 *
 * Return: the pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
