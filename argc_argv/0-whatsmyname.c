#include "main.h"
#include <stdio.h>
/**
 * main - print name
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
