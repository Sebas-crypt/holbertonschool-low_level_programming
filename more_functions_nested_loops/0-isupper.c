#include "main.h"
 /**
  *_isupper - check for uppercase
  *@c: evaluated integer
  *Return: 1 if upper case, if not 0
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
