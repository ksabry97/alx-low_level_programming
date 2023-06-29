#include <string.h>
/**
 * _strncpy - copies a string
 * @dest: pointer
 * @src: pointer
 * @n: integer
 *
 * Return: character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int x;
	int y;

	x = strlen(dest);
	y = strlen(src);
	for (i = 0; n < y ? i < n : i < y; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
