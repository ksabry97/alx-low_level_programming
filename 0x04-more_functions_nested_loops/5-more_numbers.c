#include "main.h"
/**
 * more_numbers - print most of numbers
 * Return: void
 */
void more_numbers(void);
{
	int i;
	int j;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j + '0');
			if (j > 9)
			{
				_putchar(j % 10);
			}
		}
		_putchar('\n');
	}
}
