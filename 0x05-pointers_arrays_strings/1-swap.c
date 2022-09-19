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
	*a = &b;
	*a = *b;
	*b = &a;
	*b = *a;
}
