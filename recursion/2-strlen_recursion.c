#include "main.h"
/**
 * _strlen_recusion - returns the length of a string
 * @s: string to be measured
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
