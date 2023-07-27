#include "main.h"
/**
 * cap_string - that capitalizes all words of a string
 * @s: pointer to string
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int t;

	/** t is string_ count */
	t = 0;
	while (s[t] != '\0')
	{
		if (s[0] >= 97 && s[0] < = 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[t] = ' ' || s[t] = '\t' || s[t] = '\n' || s[t] = ',' || s[t] = ':' || s[t] = '.' || s[t] = ',' || s[t] = '!' || s[t] = '?' || s[t] = '"' || s[t] = '(' || s[t] = ')' || s[t] = '{' || s[t] = '}')
		{
			if (s[t + 1] >= 97 && s[t + 1] <= 122)
				s[t + 1] = s[t + 1] - 32;
		}
	}
	return (s);
}
