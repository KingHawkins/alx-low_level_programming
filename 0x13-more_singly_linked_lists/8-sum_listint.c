#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * sum_listint - prototype
 * @head: par
 * Description: returns the sum of elements in a linked list_t list.
 * Return: sum of elements in a linked list
 */
int sum_listint(listint_t *head)
{
	size_t j = 0;
	int sum = 0;

	while (head != NULL)
	{
		head = head->next;
		sum += head->n;
		j++;
	}
	return (sum)
}
