#include <string.h>
#include "main.h"
/**
 * print_rev - returns astring in reverse
 * @s: pointer
 *
 * Return: void
 */
void print_rev(char *s)
{
	int x;
	int i;

	x = strlen(s);
	for (i = x - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
