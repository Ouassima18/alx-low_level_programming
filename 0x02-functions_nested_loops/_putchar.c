#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the chqrqcter c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, qnd errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
