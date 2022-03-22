#include "main.h"
/**
 * _strlen - Returns lenght of string
 * @s: The string to get the lenght of
 * Return: The lenght of @s
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}

	return (l);
}
