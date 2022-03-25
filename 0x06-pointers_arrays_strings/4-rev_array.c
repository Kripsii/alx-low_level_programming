#include "main.h"
/**
 * reverse_array - reverses array content
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n);
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}

}
