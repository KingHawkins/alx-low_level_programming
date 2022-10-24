#include <stdio.h>
#include "lists.h"
#include<string.h>
#include <stddef.h>
/**
 * print_list - prototype
 * @h: struct pointer
 * Description:  prints all the elements of a list_t list.
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");

		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
