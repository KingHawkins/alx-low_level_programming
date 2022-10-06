#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - prototype
 * @nmemb: bytes of memory to be allocated
 * @size: par
 * Description: allocates memory for an array using malloc
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = calloc(size, sizeof(nmemb));
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
