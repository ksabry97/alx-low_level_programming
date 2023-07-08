#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add numbers given
 * @argc : integer
 * @argv : array of strings
 *
 * Return: always (0) when success
 **/
int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		if (isalpha(argv[i]) == 0)
		{
			sum = sum + atoi(argv[i]);
		}
			printf("Error\n");
			return (1);
	}
	printf("%d\n", sum);
	return (0);
}
