#include "main.h"
/**
 * jack_bauer - function to print ever minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int b, e, r, k;

	for (b = 0; b <= 2; b++)
	{
		for (e = 0; e <= 9; e++)
		{
			if ((b <= 1 && b <= 9) || (b <= 2 && b <= 3))
			{
				for (r = 0; r <= 5; r++)
				{
					for (k = 0; k <= 9; k++)
					{
						_putchar(b + '0');
						_putchar(e + '0');
						_putchar(58);
						_putchar(r + '0');
						_putchar(k + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
