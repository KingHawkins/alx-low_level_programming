#include "main.h"
#include<stdio.h>
/**
 * print_array - protottype
 * @a: pointer to n.
 * @n: parameter
 * Description: prints elements of array of integers
 */
void print_array(int *a, int n)
{
	long int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
}
