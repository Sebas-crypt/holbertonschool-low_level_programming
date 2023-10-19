#include "main.h"
/**
 * print_last_digit - print last digit of a number literally
 * @n: number to be treated
 * Return: value of the last digit
 */
int print_last_digit_(int)
{
	int lst;

	lst = n % 10;

	if (lst < 0)
	{
		lst = lst * -1;
	}

	_putchar(lst + '0');

	return (lst);
}
