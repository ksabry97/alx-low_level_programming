#include "main.h"
/**
 * _isalpha - check alphabet
 *@c: integer
 * Return: (1) success else (0)
 */
int _isalpha(int c)
{
	if (64 < c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
