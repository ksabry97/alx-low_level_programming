#include <string.h>
#include "main.h"
/**
 * puts_half - returns half astring
 * @str: pointer
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int x;
	int y;

	y = strlen(str);
	if (strlen(str) % 2 == 0)
	{
		x = y / 2;
	}
	else
	{
		x = (y - 1) / 2;
	}
	for (i = x; i < y; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
