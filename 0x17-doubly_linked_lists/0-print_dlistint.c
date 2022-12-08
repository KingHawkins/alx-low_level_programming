#include "lists.h"
/**
 * print_dlistint - prints all element of list
 * @h: parameter
 * Description: prints all elements of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
        size_t number = 0;

        if (h != NULL)
        {
                while (h != NULL)
                {
                        printf("%d\n", h->n);
                        h = h->next;
                        number++;
                }
        }
        return (number);
}
