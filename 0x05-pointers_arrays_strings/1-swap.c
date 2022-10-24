#include "main.h"

/**
*swap_int - This funtion swaps value of two integers.
*@a: integer to be swapped.
*@b: swapped integer.
*
*Return: no return value.
*/

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
