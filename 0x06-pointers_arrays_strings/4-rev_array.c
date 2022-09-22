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

	for (i = ((sizeof(a) / sizeof(int)) - 1); i >= 0; i--)
	{
		printf("%d", a[i]);
	}
}
