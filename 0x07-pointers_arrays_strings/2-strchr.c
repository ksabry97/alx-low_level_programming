#include <string.h>
#include "main.h"
/**
 * _strchr - makes a new array
 *@s : pointer
 *@c : character
 *
 * Return: character
 */
char *_strchr(char *s, char c)
{
	int i;
	int x = strlen(s);

	for (i = 0; i < x; i++)
	{
		if (s[i] == c)
		{
			return ((s + i));
		}
	}
	return (NULL);
}
