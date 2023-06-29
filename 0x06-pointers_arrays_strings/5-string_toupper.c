#include <string.h>
/**
 * string_toupper - makes an upper case
 *@str :pointer
 *
 * Return: character
 */
char *string_toupper(char *str)
{
	int i;
	int x;

	x = strlen(str);

	for (i = 0; i < x; i++)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			int a = *(str + i) - 32;

			str[i] = a;
		}
	}
	return (str);
}
