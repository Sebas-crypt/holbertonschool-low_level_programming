#include "main.h"
/**
 * _strspn - function that gets the length of a perfix substring
 * @s: string to evaluate
 * @accept: string with the list of chars with s
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s)
	{
		char *ptr = accept;
		int found = 0;

		while (*ptr)
		{
			if (*s == *ptr)
			{
			found = 1;
			break;
		}
		ptr++;
	}
		if (!found)
			break;
		len++;
		s++;
	}
	return (len);
}
