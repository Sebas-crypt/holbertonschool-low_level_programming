#include "main.h"
#include <stdio.h>
/**
 * _puts - print string followed by a new line
 * @str: print string
 * Return: Always 0
 */
void _puts(char *str)
{
	char *str[6] = "Hello";
	char *p;
	int i;
	{
	*p = *str;

		for (i = 0; p[i] != '\0'; i++)
		{
			printf("&str[%d] = %p\n", i, p + i);
		}
	}

	return (void);
}
