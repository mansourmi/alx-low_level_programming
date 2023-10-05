#include "main.h"

/**
 * *strdup - function returns a pointer to a newly allocated space in memory
 * which contain a copy of the string given as a parameter
 * Description: Return pointer to new string
 * @str: string
 * Return: 0
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	/*+1 on size put it in the end of string char*/
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
