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
	void *ptr;

	ptr = malloc(sizeof(unsigned int) * b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
