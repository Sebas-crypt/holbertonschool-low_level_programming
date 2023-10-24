#include "main.h"
/**
 * _strcmp - function that compares 2 strings
 * @s1: string to compare
 * @s2: other string to compare
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
