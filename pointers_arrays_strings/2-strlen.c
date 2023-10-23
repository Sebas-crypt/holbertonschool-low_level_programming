#include "main.h"
/**
 * _strlen - return length of a string
 * @s: find length
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0');
	{
		i++;
		s++;
	}
	return (i);
}
