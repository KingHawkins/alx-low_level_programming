#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds new node to beginning of list
 * @head: item to be added to
 * @n: item to add to head
 * Description: adds new node to beginning of list
 * Return: address of element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tail;

	tail = malloc(sizeof(dlistint_t));
	if (!tail)
		return (NULL);
	tail->n = n;
	tail->next = NULL;
	tail->prev = NULL;
	if (!*head)
	{
		*head = tail;
		return (tail);
	}
	else
	{
		(*head)->prev = tail;
		tail->next = (*head);
		*head = tail;
		return (tail);
	}
}
