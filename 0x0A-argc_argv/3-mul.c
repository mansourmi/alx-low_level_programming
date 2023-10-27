#include <stdio.h>
#include <stdlib.h>

/**
 * main - write programm print multiple two num
 * @argc: number of command line argument
 * @argv: pointer to an array of commandline argument
 * Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (0);
	}

	return (0);
}
