#include "main.h"
#include <string.h>
/**
 * reverse_array - prototype
 * @a: pointer parameter
 * @n: array of integers
 * Description: reverses content of array of intergers
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i >= n; i > -1; i--)
	{
		_putchar(a[i]);
	}
}
