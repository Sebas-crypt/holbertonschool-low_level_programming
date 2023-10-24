#include "main.h"
/**
 * string_toupper - function that changes all lower case to upper case
 * @s: string to upper
 * Return: pointer of upper
 */
char *string_toupper(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
	}
	return (s);
}
