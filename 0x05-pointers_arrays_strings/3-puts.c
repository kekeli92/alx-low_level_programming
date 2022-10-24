#include "main.h"

/**
 * _puts - This function prints a string, followed by a new line.
 * @str: input string.
 * Return: no return value.
 */
void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
	_putchar(*(str + len));
	len++;
	}
	_putchar('\n');
}
