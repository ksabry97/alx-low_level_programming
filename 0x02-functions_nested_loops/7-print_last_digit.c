#include "main.h"
/**
 * print_last_digit - print last digit
 *@c: integer
 * Return: (1) success else (0)
 */
int print_last_digit(int c)
{
	int x;

	if (c < 0)
	{
		x = (0 - c) % 10;
	}
	else
	{
		x = c % 10;
	}
	_putchar(x + '0');
	return (x);
}
