#include <unistd.h>

/**
 * _putchar - write characer c to stdout
 * @c: the character to print
 *
 * Return: success 1
 * On error, -1 is returned, and the error is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
