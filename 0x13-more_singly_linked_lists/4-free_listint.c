#include "lists.h"
#include <stdlib.h>

/**
 * free-listint - frees a listint_t list
 *
 * @head: the head of the list
 *
 * Return: NULL if error
 */

void free_listint(listint_t *head)
{
	listint-t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
