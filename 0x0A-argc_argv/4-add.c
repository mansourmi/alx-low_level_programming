#include <stdio.h>
#include <stdlib.h>

/**
 * main - program add positive num
 * @argc: number of argument
 * @argv: array of pointer to argument
 *
 * Return: always 0 (success)
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
