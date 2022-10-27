#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * print_listint - prototype
 * @h: struct pointer
 * Description:  prints all the elements of a list_t list.
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
