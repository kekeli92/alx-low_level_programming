#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*program that prints the alphabet in lowercase, followed by a new line.
*
*Return: Always 0 (success)
*/
int main(void)
{
char chr = 'a';

	for (chr = 'a'; chr <= 'z'; chr++)
		if (chr != 'e' && chr != 'q')
			putchar(chr);
	putchar('\n');

	return (0);
}
