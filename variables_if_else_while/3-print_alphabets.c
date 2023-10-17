#include <stdio.h>
/**
 * main - alphabets in caps
 *
 * Return: Always 0
 */

int main(void)
{
	int ch;

	for (ch; 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch; 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
