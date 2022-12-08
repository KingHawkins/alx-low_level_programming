#include"lists.h"
/**
 * sum_listint - sums items in lisint
 * @head: par
 * Description: sums items in list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
        int sum = 0;

        while (head != NULL)
        {
                head = head->next;
                sum = sum + head->n;
        }
        return (sum);
}
