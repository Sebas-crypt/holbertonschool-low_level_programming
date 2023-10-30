#include "main.h"
/**
 * _sqrt_recursion - return 1 if input is a prime number if not 0
 * @n: number to calculate
 * Return: 0
 */
int _sqrt_recursion(int n)
{
 if (n == 0 || n == 1) 
		{
	        return n;
		}
		int sqrt = _sqrt_recursion(n / 2);

		if (sqrt * sqrt == n) 
		{
	        return sqrt;
		}
		if (sqrt * sqrt > n) 
		{
	        return _sqrt_recursion(n / 2 - 1);
		}
	    return _sqrt_recursion(n / 2 + 1);
	}
	
	int main() {
		int number = 16;
		int squareRoot = _sqrt_recursion(number);

		printf("The square root of %d is %d\n", number, squareRoot);

	return 0;
}
