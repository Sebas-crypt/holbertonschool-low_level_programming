#include "main.h"
/**
 * islower - 1 if c is lower case
 * Return: Always 0
 */
int islower(void)
{
	int c;
	
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
