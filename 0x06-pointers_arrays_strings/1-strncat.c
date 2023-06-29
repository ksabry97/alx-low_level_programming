#include <string.h>
/**
 * _strncat - copies a string
 * @dest: pointer
 * @src: pointer
 * @n: integer
 *
 * Return: character
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int x;

	x = strlen(dest);
	for (i = 0; i < n; i++)
	{
		dest[x + i] = src[i];
	}
	return (dest);
}
