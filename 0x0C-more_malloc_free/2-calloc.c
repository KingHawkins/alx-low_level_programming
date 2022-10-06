#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - prototype
 * @nmemb: bytes of memory to be allocated
 * @size: par
 * Description: allocates memory for an array using malloc
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr = malloc(size * nmemb);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
		t[i] = 0;

	return (ptr);
}
