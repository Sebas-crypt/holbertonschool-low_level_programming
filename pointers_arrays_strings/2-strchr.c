#include "main.h"
/**
 * *_strchr - function that locates a character string
 * @c: first occurence
 * @s: string from where to locate
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (0);
		}
	}
}
