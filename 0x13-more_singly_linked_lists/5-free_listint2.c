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
	listint_t *current;

	head = &current;
	while (current != NULL)
	{
		current = current->next;
		free((void *)current);
		current = NULL;
	}
}
