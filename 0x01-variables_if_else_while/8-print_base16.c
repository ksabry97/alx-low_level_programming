#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	char sh;

	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch + '0');
	}
	for (sh = 'a'; sh <= 'f'; sh++)
	{
		putchar(sh);
	}
	putchar('\n');
	return (0);
}
