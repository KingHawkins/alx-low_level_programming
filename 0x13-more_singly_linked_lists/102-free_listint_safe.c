#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * free_listint_safe - prototype
 * @h: par
 * Description: frees linked list
 */
size_t free_listint2(listint_t **h)
{
	listint_t **current;

	while (h != NULL)
	{
		current = h->next;
		free(h->str);
		free(h);
		h = current;
	}
	h = NULL;
}
