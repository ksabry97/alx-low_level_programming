#include "main.h"
/**
 * _abs - return absoulte
 *@c: integer
 * Return: (1) success else (0)
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (c - (c*2));
	}
	else if (c == 0)
	{
		return (0);
	}
	else 
	{
		return (c);
	}
}
