#include "main.h"
#include<stddef.h>
/**
 * print_array - protottype
 * @a: pointer to n.
 * @n: parameter
 * Description: prints elements of array of integers
 */
void print_array(int *a, int n)
{
	for (a[n] = 0; a[n] != NULL; n++)
	{
		_putchar(a[n]);
	}
}
