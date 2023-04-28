#include "main.h"
/**
 * print_alphabet - function that prints the alphabet, in lowercase
 * owned by sfiya
 * return : always 0
 */

void print_alphabet(void)
{
	char apah;

	apah = 'a';
	while (apah <= 'z')
	{
		_putchar(apah);
		apah++;
	}
	_putchar('\n');
}
