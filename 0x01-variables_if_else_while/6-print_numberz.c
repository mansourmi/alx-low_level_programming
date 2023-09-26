#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that print singlr digits number in base 0
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
