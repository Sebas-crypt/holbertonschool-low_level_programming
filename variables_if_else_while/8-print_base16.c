#include <stdio.h>
/**
 * main - print all number of base 16 in lower case
 *
 * Return: Always 0
 */
int main(void)
{
	int ch;
	char c;
	
	for (ch =0; ch < 10; ch++)
	{
		putchar((ch % 10) + '0');
	}
	for(c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
