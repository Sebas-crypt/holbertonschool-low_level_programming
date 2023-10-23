#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: char to print string
 */
void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	for (s[i] != '\0')
	{
		i++;
	}
	len = i;

	for (j = len - 1; j >=0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n')
}