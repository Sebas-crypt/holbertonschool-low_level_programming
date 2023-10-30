#include "main.h"

int ap(int n, int i);
/**
 * is_prime_number - returns 1 if the input intger is a prime number if not 0
 * @n: number to check
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (ap(n, n - 1));
}
/**
 * ap - calculates if the number is prime
 * @n: number to checl
 * @i: iterator
 * Return: 0
 */
int ap(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (ap(n, i - 1));
}
