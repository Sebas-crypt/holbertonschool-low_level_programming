#include "main.h"
#include <stdio.h>
/**
 * main - multiplies 2 numbers
 * @argc: numbers
 * @argv: multiply
 * Return: 0
 */
int atoi(char *s)
{
	int i, j, n, len, f, dgt;

	i = 0;
	j = 0;
	n = 0;
	len = 0;
	f = 0;
	dgt = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			j++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			dgt = s[i] - '0';
			if (d % 2)
				dgt = -dgt;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
	}
	i++;
}
