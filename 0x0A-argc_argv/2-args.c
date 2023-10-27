#include <stdio.h>

/**
 * main - program print all argument
 * @argc: int
 * @argv: list
*/

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
