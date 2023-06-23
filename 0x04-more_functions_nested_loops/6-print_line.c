#include "main.h"
/**
 * print_line - print lines
 * @n : integer
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x = 0;

		while (x < n)
		{
			_putchar('_');
			x++;
		}
		_putchar('\n');
	}
}
