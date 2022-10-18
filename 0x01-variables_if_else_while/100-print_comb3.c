#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, y, z = '0';

	for (x = '0'; x <= '9'; x++)
	{
		for (y = z; y <= '9'; y++)
		{
			if (x != y)
			{
				putchar(x);
				putchar(y);
			}
			if (x == y)
			{
				continue;
			}
			if (x == '8' && y == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		z++;
	}
	putchar('\n');
	return (0);
}
