#include "lists.h"
/**
 * dlistint_len - returns number of elements in list
 * @h: parameter
 * Description: returns number of elements in dlistint list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			h = h->next;
			number++;
		}
	}
	return (number);
}
