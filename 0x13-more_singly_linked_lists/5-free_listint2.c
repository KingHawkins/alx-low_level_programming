#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * free_listint2 - prototype
 * @head: par
 * Description: frees linked list
 */
void free_listint2(listint_t **head)
{
	listint_t **current;

	while (head != NULL)
	{
		current = head->next;
		free(head->n);
		free(head);
		head = NULL;
	}
}
