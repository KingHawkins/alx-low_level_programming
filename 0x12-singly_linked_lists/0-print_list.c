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
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("%i", h->len);
		printf("%s", h->str);
		if (h->str == NULL)
			printf("[0] (nil)");

		h = h->next;
		i++;
	}
	printf("\n");
	return (i);
}
