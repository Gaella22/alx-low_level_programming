#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: linked list
 * Return:  the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nbr = 0;

	while (h)
	{
		nbr++;
		h = h->next;
	}
	return (nbr);
}
