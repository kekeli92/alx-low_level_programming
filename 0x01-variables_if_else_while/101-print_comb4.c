#include <stdio.h>
/**
 * main - program that prints all possible different combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, y, z = 0;

	for (x = 0; y < 9; z++)
	{
		for (y = x + 1; y < 10; y++)
		{
			for (z = y + 1; z < 10; z++)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				putchar((z % 10) + '0');

				if (x == 7 && y == 8 && z == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
