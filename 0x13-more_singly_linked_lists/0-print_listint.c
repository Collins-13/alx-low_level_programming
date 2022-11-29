i#include "lists.h"
#include <stdio.h"

/**
 * print_listint - prints all the elements of listint_t list.
 * @h: head of linklist node
 * Rteurn:the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		pintf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
