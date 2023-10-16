#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - program to sort numbers if positive negative or zero
 *Return: positive if >0, negative if <0, zero if =0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
{
	printf; ("%d is postive \n", n);
}
	if (n == 0)
{
printf; ("%d is equal \n", n);
}
	if (n < 0)
{
	printf; ("%d is negative \n", n);
}
	return (0);
}
