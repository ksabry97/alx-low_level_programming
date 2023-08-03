#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"
/**
 * binary_to_uint - converts binary to integer
 * @b: pointer.
 *
 * Return: the decimal number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin;
	int n = strlen(b);
	int i;
	int count = 0;

	bin = 0;
	if (!b)
	{
		return (0);
	}
	for (i = (n - 1); i >= 0; i--)
	{
		int c = b[i];

		if (!(c == 48 || c == 49))
		{
			return (0);
		}
		if (c == 49)
		{
			bin = bin + pow(2, count);
		}
		count++;
	}
	return (bin);
}
