#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory of size @b.
 * @b: size of memory to be allocated
 * Return: Pointer to the allocated memory.
 *  Incase of failure, normal process termination
 *  with status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *mal = malloc(b);

	if (mal == NULL)
		exit(98);

	return (mal);
}
