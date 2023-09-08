#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: using sizeof to print the size of various types.
 *
 *Return: Always 0 (success)
*/


int main(void)
{
	ptintf("size of a char: %lu byte(s)\n", sizeof(char));
	ptintf("size of an int: %lu byte(s)\n", sizeof(int));
	ptintf("size of a long int: %lu byte(s)\n", sizeof(long int));
	ptintf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	ptintf("size of a float: %lu byte(s)\n", sizeof(float));
	return (0);

}
