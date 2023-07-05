/**
 * _pow_recursion -  prints a power of a number
 * @x : integer
 * @y : integer
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return;
	}
	return (x * _pow_recursion(x, y - 1));
}
