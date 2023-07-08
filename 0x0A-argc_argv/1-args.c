#include <stdio.h>
/**
 * main - number of arguments, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc , char *argv[] __attribute__((unused)))
{
	printf("%s\n", argc);
	return (0);
}
