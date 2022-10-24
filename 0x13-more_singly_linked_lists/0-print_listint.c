#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the element of listint_t
 * @h: pointer to the first element of the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
