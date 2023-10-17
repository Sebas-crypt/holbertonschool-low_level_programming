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
		if (ch != 'q' && ch != 'e')
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
