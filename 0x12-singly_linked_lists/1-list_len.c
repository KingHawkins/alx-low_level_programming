#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * list_len - prototype
 * @h: par
 * Description: returns the number of elements in a linked list_t list.
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;

        while (h != NULL)
        {
                h = h->next;
		j = j + 1;
        }
        return (j);
}	
