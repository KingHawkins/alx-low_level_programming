#include "lists.h"
#include<stdlib.h>
/**
 * pop_listint - prototype
 * @head: par
 * Description: deletes node head
 * Return: 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	head = malloc(sizeof(listint_t));
	if (head != NULL)
		free(head);

	else
		return (0);

}
