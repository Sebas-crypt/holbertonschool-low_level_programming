#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert a string to integer
 * @s: string to be converted
 * Return: (0)
 */
int _atoi(char *s)
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
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			dgt = s[i] - '0';
			if (j % 2)
				dgt = -dgt;
			n = n * 10 + dgt;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}
/**
 * main - add 2 positive num
 * @argc: num of args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum, num, i, d, k;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (d = 0; argv[i][d] != '\0'; d++)
		{
			if (argv[i][d] > '9' || argv[i][d] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = _atoi(argv[k]);
		if (num >= 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
