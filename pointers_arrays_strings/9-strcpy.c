#include "main.h"
/**
 * *_strcpy - function that copies a string
 * @dest: where string is going
 * @src: from where the string is going
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
