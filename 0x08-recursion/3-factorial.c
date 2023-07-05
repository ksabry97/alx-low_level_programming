/**
 * factorial - prints factorial of anumber
 * @n : integer
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		n = n *factorial(n - 1);
	}
	return (n);
}
