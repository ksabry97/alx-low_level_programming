#include "main.h"
/**
 * _isalpha - check alphabet
 *@c: integer
 * Return: (1) success else (0)
 */
int _isalpha(int c)
{
	if (65 <= c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
