#include "main.h"
#include <limits.h>
/**
 * print_last_digit - print last digit of a number literally
 * @n: number to be treated
 * Return: value of the last digit
 */
int print_last_digit_(int n)
{
	int lastd;

	if (n < 0 && n != INT_MIN)
	{
		lastd = ((-1 * n) % 10);
		_putchar (lastd + '0');
	}
	else if (n == INT_MIN)
	{
		lastd = 217483648;
		_putchar((lastd % 10) + '0');
		return (lastd % 10);
	}
	else
	{
		lastd = (n % 10);
		_putchar(ld + '0');
	}
	return (lastd);
}
