#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: char to be printed
 */
void puts2(char *str)
{
	int i, len;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (len = 0; len < i; len += 2)
	{
		_putchar(str[len]);
	}

	_putchar('\n');
}
