#include "main.h"
/**
 * print_diagsums - function that prints the sums of 2 diagonals
 * @a: square of matrix
 * @size: of the square
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum +=a[(size * i) + i];
		sum +=a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
