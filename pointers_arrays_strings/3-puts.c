#include "main.h"
#include <stdio.h>
/**
 * _puts - print string followed by a new line
 * @str: print string
 * Return: Always 0
 */
void _puts(char *str)
{
	int i;

		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n')
}
