#include "function_pointers.h"

/**
 * array_iterator - Execute a function given as a parameter
 * @array: The array.
 * @size: size of array
 * @action: Pointer to function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/*int i;*/

	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
