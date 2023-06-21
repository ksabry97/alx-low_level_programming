#include "main.h"
/**
 * times_table - return the time
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;
	int x;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			x = a * b;
			_putchar((x / 10) + '0');
			_pucthar((x % 10) + '0');
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
