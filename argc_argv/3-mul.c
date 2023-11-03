#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers
 * @argc: counts input in command line
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char **argv)
{
	int n, j;

	j = 0;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		j = 1;
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", n);
	}
	return (j);
}
