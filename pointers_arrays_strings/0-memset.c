#include "main.h"
/**
 * *_memset - function to fill a memory with a constant byte
 * @s: memory to be filled
 * @b: char to copy
 * @n: times to copy
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
