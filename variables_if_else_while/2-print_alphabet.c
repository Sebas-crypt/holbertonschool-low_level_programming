#include <stdio.h>
/**\
 * main - starting my program
 * int ch - introduce ch
 * for = for every ch <= print body
 *
 * Return: Always 0
 */
int main (void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
		putchar ('\n');
	}
	return (0);
}
