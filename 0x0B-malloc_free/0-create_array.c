#include "main.h"

/**
 * *create_array - create array of chars and initilize it
 *
 * @size: size of array
 * @c: char to initilize
 *
 * Return: pointer to array or NULL
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
