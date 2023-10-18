#include "main.h"
#include <ctype.h>
/**
 * islower - 1 if c is lower case
 * Return: Always 0
 */
int _islower(int)
{
	int c;
	
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
