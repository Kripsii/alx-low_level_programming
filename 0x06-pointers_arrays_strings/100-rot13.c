#include "main.h"

/**
 * rot13 -  a function that encodes a string using rot13.
 * @a: An input string to encode using rot13
 * Return: An encode string
 */
char *rot13(char *a)
{
	int j;
	int i = 0;
	char init[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char fin[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(a + i))
	{
		for (j = 0; j <= 52; j++)
		{
			if (*(a + i) == init[j])
			{
				*(a + i) = fin[j];
				break;

			}

		}

		i++;
	}
	return (a);
}
