#include <string.h>
/**
 * _strcat - copies a string
 * @dest: pointer
 * @src: pointer
 *
 * Return: character
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int x;
	int y;

	x = strlen(dest);
	y = strlen(src);
	for (i = 0; i < y; i++)
	{
		dest[x + i] = src[i];
	}
	return (dest);
}
