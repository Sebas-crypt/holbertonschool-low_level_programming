#include "main.h"
#include <stdio.h>
/**
 * _atoi - multiplies 2 numbers
 * @s: digit
 * Return: 0
 */

int _atoi(char *s)
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
