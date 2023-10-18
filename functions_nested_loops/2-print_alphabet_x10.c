#include "main.h"
/**
 * print alphabet - print alphabet x10
 * Return: void
 */
main print_alphabet_x10(void)
{
	char c;
	int ch;

	while (ch <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n')

		ch++;
	}
}
