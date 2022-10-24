#include "main.h"

/**
 * print_rev - This function reverse the characters in a string and print them
 * @s: points character of string
 * @rev - variable to store reversed characters.
 * Return: returns a reversed string.
 */
void print_rev(char *s)
{
	char rev[1000];
	int index, i, count = 0;

	while (s[count] != '\0') /* finding length of string */
	{
		count++;
	}
	i = count - 1;

	/* reversing string */
	for (index = 0; index < count; index++)
	{
		rev[index] = s[i];
		i--;
		_putchar(rev[index]);
	}
	_putchar('\n');
}
