#include "lists.h"

/**
 * free_listint_safe - A function that frees a list
 * @h: pointer list_in structure
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *temp;

	temp = *h;
	while (temp)
	{
		temp = *h;
		temp = temp->next;
		free_list(temp);
		counter++;
	}
	*h = NULL;
	return (counter);

}

/**
 * free_list - A function that frees a listint_t recursively
 * @head: pointer to list_h structure
 * Return: Nothing
 */
void free_list(listint_t *head)
{
	listint_t *temp;

	if (head)
	{
		temp = head;
		temp = temp->next;
		free(temp);
		free_list(temp);
	}
	free(head);
}
