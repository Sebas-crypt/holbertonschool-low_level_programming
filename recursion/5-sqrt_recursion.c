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
	return (n, 0);
}
/**
 * actual_sqrt_recursion - find the natural
 * @n: number to calculate
 * @i: iterator
 * Return: 0
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
