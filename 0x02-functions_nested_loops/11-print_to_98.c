#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Entry point
 *@n:inetger
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			n--;
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		printf("%d", n);
	}
	_putchar('\n');
}

