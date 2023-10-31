#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum number of coin to make change
 * @argc: number of comand line
 * @argv: pointer to array of command line
 * Return: 0 success, non zero fail
*/

int main(int argc, int *argv[])
{
	if (argc == 2)
	{
	int i, leastcent = 0, money = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1,};

	for (i = 0; i < 5; i++)
	{
		if (money >= cents[i])
		{
			leastcent += money / cents[i];
			money = money % cents[i];
			if (money % cents[i] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
