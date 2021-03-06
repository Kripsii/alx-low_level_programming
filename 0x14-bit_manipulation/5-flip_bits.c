#include "main.h"

/**
 * flip_bits - Returns number of bits to be flipped.
 * @n: integer
 * @m: the number @n is to be flopped
 * Return: Number of bits to be flopped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, flip = 0;

	while (xor > 0)
	{
		flip += (xor & 1);
		xor >>= 1;
	}

	return (flip);
}
