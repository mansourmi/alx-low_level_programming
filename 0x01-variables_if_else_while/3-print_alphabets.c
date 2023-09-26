#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints a program that alphabet in lowercasea and in uppercase
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/* print a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A - Z*/
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
