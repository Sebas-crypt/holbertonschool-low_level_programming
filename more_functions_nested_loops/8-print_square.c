#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	int s, q;

	if (size <= 0)
		_putchar('\n');

	for (s = 0; s < size; s++)
	{
		for (q = 0; q < (size); q++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
