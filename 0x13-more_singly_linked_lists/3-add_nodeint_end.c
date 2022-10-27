#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds node at end
 * @head: head
 * @n: n to add
 * Return: address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int i = 0;
	listint_t *new, *f;

	while (i <= n)
		i++;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = i;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		f = *head;
		while (f->next != NULL)
			f = f->next;
		f->next = new;
		return (new);
	}
}
