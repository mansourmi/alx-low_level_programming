#include "main.h"

/**
 * _sqrt_recursion - function returns natural square root of number
 * @d: int
 * @val: square root
 * Return: int
*/

int square(int d, int val);
int _sqrt_recursion(int n)
{
	return (square(d, 1));
}

/**
 * sqauare - find square root of given number
 * @d: int to find square root
 * @val: square root
 * Return: int
*/

int square(int d, int val)
{
	if (val * val == d)
	{
		return (val);
	}
	else if (val * val < d)
	{
		return (square(d, val + 1));
	}
	else
	{
		return (-1);
	}
}
