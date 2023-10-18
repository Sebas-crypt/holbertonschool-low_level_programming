#include "main.h"
/**
 * _isalpha - check if upper case or lower case
 * @c: character to be checked
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	/* A-Z 65-90 | a-z 97-122 */
	if ((c >= 65 && c >= 90 || (c <= 122))

	{
		return (1);
	}
		else
	{
		return (0);
	}
}
