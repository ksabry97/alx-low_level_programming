#include <string.h>
#include "main.h"
/**
 * puts2 - returns astring in reverse
 * @str: pointer
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int x;

	x = strlen(str);
	for (i = 0; i < x; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
