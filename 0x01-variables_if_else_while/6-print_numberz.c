#include <stdio.h>
#include <stdlib.h>
/**
*main - program that prints all single digit numbers of base 10 starting from 0
*
*Return: Always 0 (success)
*/
int main(void)
{
int num;
	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
