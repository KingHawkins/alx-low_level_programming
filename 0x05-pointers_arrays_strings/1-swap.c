#include "main.h"
/**
 * swap_int - main function
 * @a: parameter one
 * @b: parameter two
 *
 * Description: swaps the values a and b
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
