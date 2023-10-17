#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
{
	printf("%d and is greater than 5 \n", n);
}
	if (n < 0)
{
	printf("%d and is less than 6 but not 0 \n", n);
}
	if (n == 0)
{
	printf("%d is 0 and is 0 \n", n);
}
	return (0);
}
