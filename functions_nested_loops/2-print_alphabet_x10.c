#include "main.h"
/**
 * print alphabet - print alphabet x10
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		ch++;
	}
}
