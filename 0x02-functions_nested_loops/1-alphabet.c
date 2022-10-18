#include "main.h"
/**
 * print_alphabet - void function used to print lowercase alphabets
 *
 * Always 0
 */
void print_alphabet(void)
{
	char wrd;

	for (wrd = 'a'; wrd <= 'z'; wrd++)
		_putchar(wrd);

	_putchar('\n');
}
