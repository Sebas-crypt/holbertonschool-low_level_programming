#include <stdio.h>
/**
 * main - reverse alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
