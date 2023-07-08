#include <stdio.h>
/**
 * main - returns all arguments given
 * @argc : integer
 * @argv : array of strings
 *
 * Return: always (0) when success
 **/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
