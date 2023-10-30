#include "main.h"
/**
 * _sqrt_recursion - return 1 if input is a prime number if not 0
 * @n: number to calculate
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
