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
	int y;

	x = strlen(dest);
	y = strlen(src);
	for (i = 0; n < y ? i < n : i < y; i++)
	{
		dest[x + i] = src[i];
	}
	return (dest);
}
