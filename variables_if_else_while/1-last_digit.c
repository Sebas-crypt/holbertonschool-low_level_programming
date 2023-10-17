#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints a text accord number
 *
 * Return: Always Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (lastd > 5)
{
	printf("Last digit of %d is %d and is greater than 5 \n", n);
}
	if (lastd < 0)
{
	printf("Last digit of %d and is %d is less than 6 but not 0 \n", n);
}
	if (lastd < 6 && lastd != 0)
{
	printf("Last digit of %d is %d and is 0 \n", n);
}
	return (0);
}
