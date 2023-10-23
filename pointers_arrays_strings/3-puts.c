#include "main.h"
/**
 * _puts - print string followed by a new line
 * @str: print string
 * Return: Always 0
 */
void _putchar(char *str)
{
	char str[6] = "yo";
	char *p;
	int i;

	*p = *str;

	for (i = 0; p[i] != '\0'; i++)
		pritnf("&str[%d] = %p\n", i , p+i);

	return 0;
}
