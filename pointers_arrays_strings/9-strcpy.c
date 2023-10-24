#include "main.h"
/**
 * *_strcpy - function that copies string
 * @dest: where string is going
 * @src: from where the string is gonna go
 */
char *strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
