#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *b;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		b = (*head)->next;
		free(*head);
		*head = b;
	}
	*head = NULL;
}
