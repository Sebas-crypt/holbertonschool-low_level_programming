#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @s: strint to be capitalized
 * Return: string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] >= 'a' && s[i] <= 'z')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			char tmp;

			tmp = str[i - 1];
			if (tmp == '\t' || tmp == '\n')
				s[i] = s[i] - 32;

			if (tmp == '{' || tmp == '}')
				s[i] = s[i] - 32;

			if (tmp == '(' || tmp == ')')
				s[i] = s[i] - 32;

			if (tmp == ',' || tmp == '.' || tmp == ';')
				s[i] = s[i] - 32;

			if (tmp == '?' || tmp '!')
				s[i] = s[i] - 32;

			if (tmp == ' ' || tmp == '"')
				s[i] = s[i] - 32;

			if (i == 0)
				str[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
