#include "main.h"
/**
 * _strncat - concanates two strings.
 * @dest: destination string.
 * @src: source string.
 * @n: an input integer.
 *
 * Return: a pointer to resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
	{
		i++;
	}

	while ((src + j < src + n) && *(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	
	return (dest);
}
