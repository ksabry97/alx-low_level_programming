#include <string.h>
/**
 * reverse_array - reverse an array
 * @a: pointer
 * @n: integer
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		int x = a[i];
		int y = a[j];
		
		*(a + i) = y;
		*(a + j) = x;
		j--;
	}
}
