#include <string.h>
#include "main.h"
/**
 * _puts_recursion - print a string
 * @s : pointer
 * Return: void
 */
void _puts_recursion(char *s)
{
	int n = strlen(s);
	int x = 0;

	if (x == n)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[x]);
	_puts_recursion((s + 1));
}
