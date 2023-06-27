#include <main.h>
#include <string.h>
/**
 * _puts - returns astring
 * @str: pointer
 *
 * Return: void
 */
void _puts(char *str)
{
	int x;
	int i;

	x = strlen(str);
	for (i = 0; i <= x; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
