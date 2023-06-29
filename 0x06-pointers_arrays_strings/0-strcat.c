#include <stdio.h>
/**
 * _strcat - copies a string
 * @dest: pointer
 * @src: pointer
 *
 * Return: character
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
