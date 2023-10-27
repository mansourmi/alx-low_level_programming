#include <stdio.h>

/**
 * main - program prints the numb of argument
 * @argc: number of commandline argument
 * @argv: pointer to an array
 * Return: Always 0 (success)
*/

int main(int argc, char *argv[] __attribute__((unused)))
{

	printf("%d\n", argc - 1);
	return (0);
}
