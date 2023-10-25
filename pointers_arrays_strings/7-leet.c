#include "main.h"
/**
 * *leet - a function that encodes a string into 1337
 * @str: string to encode
 * Return: s
 */
char *leet(char *str)
{
	char *tmp = str;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*str)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*str == key[i] || *str == key[i] + 32)
			{
				*str = value[i] + '0';
			}
		}
		str++;
	}
	return (tmp);
}
