#inlude "lists.h"
#include <stdio.h>

/**
 * listint_len - the number of elements in a linked listint_h list.
 *
 * @h: head pointer
 *
 * Return: the number of elements
 */

 size_t listint_len(const listint_t *h)
{
	int count = 0;
	
	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			count++;
		}
	}
	return (count);
}
