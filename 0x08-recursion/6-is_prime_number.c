/**
 * check - returns the prime number
 * @n: input number.
 * @c: iterator.
 * Return: (1) or (0)
 */
int check(int n, int c)
{
	if (c == 1)
	{
		return (1);
	}
	if (n % c == 0)
	{
		return (0);
	}
	return (check(n, (c - 1)));
}
/**
 * is_prime_number - returns the prime number.
 * @n: input number.
 * Return: (1) or (0).
 */
int is_prime_number(int n)
{
	if (n > 1)
	{
		return (check(n, (n - 1)));
	}
	return (0);
}
