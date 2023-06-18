#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char sh;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (sh = 'A'; sh <= 'Z'; sh++)
	{
		putchar(sh);
	}
	putchar('\n');
	return (0);
}
