#include "main.h"
#include <limits.h>
/**
 * print_last_digit - print last digit of a number literally
 * @n: number to be treated
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0 && n != INT_MIN)
	{
		ld = ((-1 * n) % 10);
		_putchar (ld + '0');
	}
	else if (n == INT_MIN)
	{
		ld = 217483648;
		_putchar((ld % 10) + '0');
		return (ld % 10);
	}
	else
	{
		ld = (n % 10);
		_putchar(ld + '0');
	}
	return (ld);
}
