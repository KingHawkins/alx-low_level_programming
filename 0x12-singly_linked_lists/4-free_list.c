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
	free(head->next);
	free(head->len);
	free(head->str);
	free(head);
}
