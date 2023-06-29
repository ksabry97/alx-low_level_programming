#include <string.h>
/**
 * leet - makes encrypted message
 *@str :pointer
 *
 * Return: character
 */
char *leet(char *str)
{
	int i;
	int x;

	x = strlen(str);
	for (i = 0; i < x; i++)
	{
		int j;
		char s2[10] = {'o', 'l', 'e', 'a', 't', 'O', 'L', 'E', 'A', 'T'};
		char s3[5] = {'0', '1', '3', '4', '7'};

		for (j = 0; j < 5; j++)
		{
			if (str[i] == s2[j] || str[i] == s2[j + 5])
			{
				str[i] = s3[j];
			}
		}
	}
	return (str);
}
