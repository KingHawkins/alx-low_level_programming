#include "lists.h"
/**
 * add_dnodeint_end - adds node at end
 * @head: head address of linked list
 * @n: number of new value for new node
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail;

	tail = malloc(sizeof(dlistint_t));
	if (!tail)
		return (NULL);
	tail->next = NULL;
	tail->prev = NULL;
	tail->n = n;
	if (!*head)
	{
		*head = tail;
		return (tail);
	}
	else
	{
		(*head)->next = tail;
		tail->prev = (*head);
		tail = *head;
		return (*head);
	}
}
