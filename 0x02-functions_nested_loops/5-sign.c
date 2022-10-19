#include "main.h"
/**
*print_sign - This function prints the sign of a number
*@n:prints + and returns 1 if n is greater than 0
*Return: Always 1 if c is lowercase or uppercase
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
_putchar('\n');
}
