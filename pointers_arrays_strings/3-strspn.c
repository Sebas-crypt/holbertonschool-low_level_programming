#include "main.h"
/**
 * _strspn - function that gets the length of a perfix substring
 * @s: string to evaluate
 * @accept: string with the list of chars with s
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, flag;

	f = 0;

	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			f++;
			flag = 1;
		}
		if (flag == 0)
		{
			return(f);
		}
	}
	return (0);
}
