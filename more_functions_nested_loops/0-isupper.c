#include "main.h"

/**
 * _isupper - checks uppercase letters
 * @c: letter to be checked
 * Return: 1 if success or 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
