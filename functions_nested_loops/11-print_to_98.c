#include "main.h"
/**
 * print_to_98 - print all numbers to 98
 * @n: number from where to print
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d" , n);
				printf("\n")
				break;
			}
			else
			{
				printf("%d", ", n);
			}
		}
	}
}
