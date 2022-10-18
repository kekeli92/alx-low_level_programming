#include <stdio.h>
#include <stdlib.h>
/**
*main - program that prints the lowercase alphabet in reverse
*
*Return: Always 0 (success)
*/
int main(void)
{

int chr;

	for (chr = 'z'; chr > 'a'; chr--)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
