#include "main.h"
/**
 * swap_int - swap a to b
 * @a: char to be swapped
 * @b: char to swap
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
