#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a;
	listint_t *temp = *head;

	a = malloc(sizeof(listint_t));
	if (!n)
		return (NULL);
	a->n = n;
	a->next = NULL;
	if (*head == NULL)
	{
		*head = a;
		return (a);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = a;
	return (a);
}
