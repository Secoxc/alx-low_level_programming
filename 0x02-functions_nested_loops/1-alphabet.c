#include "main.h"

/**
 * print _alphabet - utilizes on the _putchar function to print
 *                the alphabet a - z
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');

}


