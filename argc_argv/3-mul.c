#include "main.h"
#include <stdio.h>
/**
 * main - multiplies 2 numbers
 * @argc: numbers
 * @argv: multiply
 * Return: if the program receives two arguments - 0.
 * if the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);
	return (0);
}
