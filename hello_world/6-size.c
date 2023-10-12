#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int intType;
	int floatType;
	int doubleType;
	int charType;
	printf("Size of int: %zu byte(s)\n", (sizeof(intType));
	printf("Size of float: %zu byte(s)\n", (sizeof(floatType));
	printf("Size of double: %zu byte(s)\n", (sizeof(doubleType));
	printf("Size of char: %zu byte(s)\n", (sizeof(charType));
	return (0);
}
