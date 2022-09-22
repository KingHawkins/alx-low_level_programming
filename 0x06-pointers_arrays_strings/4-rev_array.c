#include "main.h"
#include <stdio.h>
/**
 * reverse_array - prototype
 * @a: pointer parameter
 * @n: array of integers
 * Description: reverses content of array of intergers
 */
void reverse_array(int *a, int n)
{
	long int i;

	for (i = (n - 1); i > -1; i--)
	{
		printf("%ld", a[i]);
	}
}
