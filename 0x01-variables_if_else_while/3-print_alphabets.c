#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
int chr;
	for (chr = 'a'; chr <= 'z'; chr++)
	putchar(chr);

	for (chr = 'A'; chr <= 'Z'; chr++)
	putchar(chr);

	putchar('\n');
	return (0);
}
