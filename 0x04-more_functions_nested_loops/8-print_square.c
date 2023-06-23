#include "main.h"
/**
 * print_square - print square
 * @size: integer
 *
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x = 0;

		while (x < size)
		{
			int i = 0;

			while (i < size)
			{
				_putchar('#');
				i++;
			}
			_putchar('\n');
			x++;
		}
	}
}
