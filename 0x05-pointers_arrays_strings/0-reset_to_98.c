#include "main.h"
/**
 * reset_to_98 - prototype
 * @n: parameter
 * Description: prints to 98
 */
void reset_to_98(int *n)
{
	int c = 98, *a;

	c = *a;
	*a = &c;
	*n = *a;
	*n = c;
}
