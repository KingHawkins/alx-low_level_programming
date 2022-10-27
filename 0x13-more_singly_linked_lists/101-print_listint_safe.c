#include <stdio.h>
#include "lists.h"
#include<string.h>
#include <stddef.h>
/**
 * print_listint_safe - prototype
 * @head: struct pointer
 * Description:  prints all the elements of a list_t list.
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			printf("%d\n", head->n);
			head = head->next;
			i++;
		}
	return (i);
	}
	else
		return (98);

}
