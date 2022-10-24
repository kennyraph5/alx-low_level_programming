#include "lists.h"

/**
 * listint_len - counts the number of elements in a linked list
 * @h: pointer to the first node
 * Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
