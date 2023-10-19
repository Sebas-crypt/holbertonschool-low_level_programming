#include "main.h"
/**
 * print _sign - print sign of number
 * @n: number to be checked
 * Return: -1, 0 or 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
