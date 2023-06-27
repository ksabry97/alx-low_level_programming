#include <stdio.h>
#include "main.h"
/**
 * print_array - returns elements of an array
 * @a: array
 * @n: integer
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d", a[i]);
		putchar(',');
		putchar(' ');
	}
	printf("%d", a[n - 1]);
	putchar('\n');
}
