#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * free_list - prototype
 * @head: par
 * Description: frees linked list
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
