/**
 * swap_int - swap two integers
 * @a: pointer
 * @b: pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;
	int y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
