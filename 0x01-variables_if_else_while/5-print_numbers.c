#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers in base 10
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		puts("%i", digit);
		digit++;
	}

	return (0);
}
