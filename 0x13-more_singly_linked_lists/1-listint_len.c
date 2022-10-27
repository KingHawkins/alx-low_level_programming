#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * listint_len - prototype
 * @h: par
 * Description: returns the number of elements in a linked listint_t list.
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		h = h->next;
		j++;
	}
	return (j);
}
