#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: First pointer argument
 * @b: Second pointer argument
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
