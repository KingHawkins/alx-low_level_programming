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
	int i;

	for (i = n; i >= 0; i--)
	{
		printf("%d", a[i]);
	}
}
