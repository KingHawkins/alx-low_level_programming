#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - prototype
 * @head: par
 * @index: index of node
 * Description: returns index of node head
 * Return: NULL if not
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int value;
	unsigned int i = 0;

	while (head != NULL)
	{
		head = head->next;
		value = head->n;
		if (i == index)
		{
			value = head->n;
			return ((listint_t *)value);
		}
	i++;
	}
	return (NULL);
}
