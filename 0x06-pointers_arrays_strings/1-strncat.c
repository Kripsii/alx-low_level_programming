#include "main.h"
/**
 * _strncat - concanates two strings
 * @dest: destination string
 * @src: source string
 * @n: an input integer
 *
 * Return: a pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' &&  j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
