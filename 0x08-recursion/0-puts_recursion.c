#include <stdio.h>
/**
 * _puts_recursion - function that prints a string
 * @s: put a recursion
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s != 0)
	{
		putchar(*s);
	s++;
	_puts_recursion(s);
	}
	else
	{
	putchar('\n');
	}
}
