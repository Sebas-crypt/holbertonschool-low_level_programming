#include "main.h"
/**
 * times_table - prints table 9 times
 * Return: void
 */
void times_table(void)
{
	int c, a, s;

	for (c = 0; c < 10; c++)
	{
		for (a = 0; a < 10; a++)
		{
			s = a * c;
			if (a == 0)
			{
				_putchar(s + '0');
			}
			if (s < 10 && j != 0);
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (s >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((s / 10) + '0');
				_putchar((s % 10) + '0');
				_putchar('\n');
			}
		}
	}
}
