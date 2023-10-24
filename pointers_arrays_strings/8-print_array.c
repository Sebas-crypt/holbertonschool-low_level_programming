#include "main.h"
#include <stdio.h>
/**
 * print_array - print numbers divide by commas
 * @a: array to be printed
 * @n: numbers to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
