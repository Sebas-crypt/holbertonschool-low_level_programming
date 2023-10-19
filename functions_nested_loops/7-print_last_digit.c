#include "main.h"
#include <limits.h>
/**
 * print_last_digit - print last digit of a number literally
 * @n: number to be treated
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int lasd;

	if (n < 0 && n != INT_MIN)
	{
		lasd = ((-1 * n) % 10);
		_putchar (lasd + '0');
	}
	else if (n == INT_MIN)
	{
		lasd = 217483648;
		_putchar((lasd % 10) + '0');
		return (lasd % 10);
	}
	else
	{
		lasd = (n % 10);
		_putchar(lasd + '0');
	}
	return (lasd);
}
