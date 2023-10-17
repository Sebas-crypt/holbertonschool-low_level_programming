#include <stdio.h>
/**
 * main - print all single digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int ch;

	for (ch = 48; ch 58; ch++)
	{
		putchar(ch);
		if (ch < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
