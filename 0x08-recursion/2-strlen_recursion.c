#include <stdio.h>
/**
 * factorial -function that returns the length of a string
 * @n: string
 * Return: length of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
