#include "main.h"
#include <stdio.h>

/**
 * _memcpy - a fuction that copies n bytes from
 * memory src to memory area dest
 * @dest: Pointer destination for copied bytes
 * @src: Pointer character to be copied.
 * @n: Number of bytes to be copied.
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
