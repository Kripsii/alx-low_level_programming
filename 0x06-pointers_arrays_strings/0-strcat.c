#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: Pointer to destination string.
 * @src: Pointer to source string
 *
 * Return: Pointer to resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (tmp);

}
