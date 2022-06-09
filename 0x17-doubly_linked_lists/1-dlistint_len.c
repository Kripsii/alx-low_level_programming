#include "lists.h"

/**
 * dlistint_len - returns the length of a double-linked list
 * @h: pointer to head
 * Return: length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
