#include "main.h"

/**
 * clear_bit - Sets value of a bit at given index to 0.
 * @n: integer
 * @index: index to set value at
 * Return: 1 on success, -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int idx = index;

	if (idx >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << idx);
	return (1);
}
