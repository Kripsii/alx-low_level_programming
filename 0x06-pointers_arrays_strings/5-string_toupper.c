#include "main.h"
/**
 * string_toupper - a function changes that changes case
 * @s: An input string
 * Return: converted string
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;

		s++;
	}

	return (start);
}
