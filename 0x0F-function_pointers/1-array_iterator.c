#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints elements of array of given size
 * @array: array
 * @size: size of the array
 * @action : pointer to afunction
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
