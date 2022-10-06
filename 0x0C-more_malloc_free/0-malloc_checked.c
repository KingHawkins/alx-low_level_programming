#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - prototype
 * @b: par
 * Description: allocates memory using malloc
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(sizeof(b));
	if (!ptr)
	{
		return (98);
	}
	free(ptr);
}
