#include "main.h"

/**
 * *malloc_checked - allocates memory by using malloc and exit
 * @b: int
 * Return: pointer to array initialized or NUlL
*/

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
