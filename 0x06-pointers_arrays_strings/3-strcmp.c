#include <string.h>
/**
 * _strcmp - copies a string
 * @s1: pointer
 * @s2: pointer
 *
 * Return: character
 */
int _strcmp(char *s1, char *s2)
{
	int x;
	int y;
	int i;

	x = strlen(s1);
	y = strlen(y);
	if (x > y)
	{
		return (15);
	}
	else if (x < y)
	{
		return (-15);
	}
	else
	{
		for (i = 0; i < x; i++)
		{
			if (s1[i] == s2[i])
			{
				return (0);
			}
			else
			{
				return (1);
			}
		}
	}
}
