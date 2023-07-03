#include "main.h"
/**
 * _memcpy- makes a new array
 *@dest : pointer
 *@src :pointer to character
 *@n : unsigned integer
 *
 * Return: character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
