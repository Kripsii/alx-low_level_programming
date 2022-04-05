#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns pointer to a 2D integers array.
 * @width: Width of grid.
 * @height: height of the grid
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **arr, hi, wi;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	hi = 0;
	while (hi < height)
	{
		arr[hi] = malloc(sizeof(int) * width);

		if (arr[hi] == NULL)
		{
			while (hi >= 0)
			{
				free(arr[hi]);
				hi--;
			}

			free(arr);
			return (NULL);
		}
		hi++;
	}
	for ( ; hi < height; hi++)
	{
		for (wi = 0; wi < width; wi++)
		{
			arr[hi][wi] = 0;
		}
	}
	return (arr);
}
