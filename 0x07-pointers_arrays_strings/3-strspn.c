#include "main.h"
#include <stdio.>
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: String pointer to be searched
 * @accept: source
 *
 * Return: the number of bytes in the initial segment of s,
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (*s)
	{
		j = 0;
		while (accept[j])
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (i);
			}
			j++;
		}
		s++;
	}
	return (i);
}
