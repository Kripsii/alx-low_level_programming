#include "main.h"
/**
 * _memset - Fills first @n bytes of memory
 * area pointed by @s witha constant byte @b
 * @s: Pointer to memory area to be filled.
 * @a: The constant character to fill the area
 * @n: The bytes of memory to be filled
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;

	}

	return (s);
}
