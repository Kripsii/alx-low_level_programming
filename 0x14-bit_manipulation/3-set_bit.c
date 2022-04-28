#include "main.h"

/**
 * set_bit - Sets value of a bit to 1 at a given index.
 * @n: pointer to number
 * @index: index starting from 0 bit
 * Return: 1 on success, -1 fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int idx = index;

	if (idx >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << idx);
	return (1);
}
