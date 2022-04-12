#include "main.h"
#include <stdio.h>

/**
 * array_range - Creates an array of integers
 * @min: first array elements
 * @max: last array elements
 * Return: Pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
