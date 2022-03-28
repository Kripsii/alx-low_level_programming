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
	unsigned int count = 0;
	unsigned int prev = 0;
	int i, j;

	i = 0;
	j = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		prev = count;

		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
			}
			j++;

		}
		if (prev == count)
		{
			break;
		}
		i++;
	}
	return (count);

}
