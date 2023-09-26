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
	char;
	int;
	long int;
	long long int;
	float;

	puts("Size of a char: %u byte(s)", (char)sizeof);
	puts("Size of an int: %u byte(s)", (int)sizeof);
	puts("Size of a long int: %u byte(s)", (long int)sizeof);
	puts("Size of a long long int: %u byte(s)", (long long int)sizeof);
	puts("Size of a float: %u bytes(s)", (float)sizeof);

	return (0);
}
