#include <string.h>
#include "main.h"
/**
 * _strspn - makes a new array
 *@s : pointer
 *@accept : character
 *
 * Return: unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;
	int j;
	int x = strlen(s);
	int y = strlen(accept);

	for (i = 0; *(s + i) != ' '; i++)
	{
		for (j = 0; j < y; j++)
		{
			if (*(s + i) == accept[j])
			{
				count++;
			}
		}
	}
	return (count);
}
