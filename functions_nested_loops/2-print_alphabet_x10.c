#include "main.h"
/**
 * print alphabet - print alphabet x10
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c;
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
