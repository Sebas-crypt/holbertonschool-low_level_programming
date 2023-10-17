#include <stdio.h>
/**
 * main - excluding q and e from alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	if (string[q] == string[q - 1])
	{
		string[q] = '\0';
	}
	putchar('\n');
	return (0);
}
