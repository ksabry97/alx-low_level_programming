#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - prints elements of array of given size
 * @array: array
 * @size: size of the array
 * @cmp : pointer to afunction
 * Return: (-1) when false
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
