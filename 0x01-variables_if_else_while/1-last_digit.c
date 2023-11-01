#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: last digit
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n;
	int digit,

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	digit = n % 10 ;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n,digit);
	}
	if (n == 0)
	{
		printf("Last digit of %d is %d and is zero", n,digit);
	}
	if ((n < 6) != 0)
	{
		printf("Last digit of %d is %d is less than 6 and not 0", n, digit);
	}
	return (0);
}
