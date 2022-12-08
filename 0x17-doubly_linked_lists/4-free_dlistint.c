#include "lists.h"
/**
 * free_dlistint - frees list
 * @head: head of list to free
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head->next);
                free(head->prev);
                free(head);
                head = NULL;
	}
}
