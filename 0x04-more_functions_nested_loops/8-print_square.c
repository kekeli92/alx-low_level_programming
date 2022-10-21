#include "main.h"

/**
 * print_square - print a square - #
 * @size: square value
 *
 * if size is 0 or less, print only a new line
 *
 * Return: return sqr value on terminal
 */
void print_square(int size)
{
int sqr1, sqr2;

	if (size <= 0)
		_putchar('\n');

	for (sqr1 = 0; sqr1 < size; sqr1++)
	{
		for (sqr2 = 0; sqr2 < size; sqr2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
