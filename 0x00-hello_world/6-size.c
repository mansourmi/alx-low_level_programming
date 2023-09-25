#include <stdio.h>
/**
 * main - Entry point
 *
 * Descriptin: Write a C program that prints the size of various types
 *
 * Return: Always 0 (succes)
*/

int main(void)
{
	char c;
	int b;
	long int d;
	long long int g;
	float a;

	printf("Size of a char : %lu.\n", (char)sizeof(c));
	printf("Size of an int: %lu.\n", (int)sizeof(c));
	printf("Size of a long int: %lu.\n", (long int)sizeof(d));
	printf("Size of a long long int: %lu.\n", (long long int)sizeof(g));
	printf("Size of a float: %lu.\n", (float)sizeof(a));

	return (0);
}
