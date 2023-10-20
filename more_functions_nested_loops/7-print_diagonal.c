#include "main.h"
/**
 * print_diagonal - print diagonal line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int d, l;

	if (n <= 0)
		_putchar('\n')
	for (d = 0; d < n; d++)
	{
		for (l = 0; l < d; l++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
