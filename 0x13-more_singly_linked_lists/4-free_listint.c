#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * free_listint - prototype
 * @head: par
 * Description: frees linked list
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
