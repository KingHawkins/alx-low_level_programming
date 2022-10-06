#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - prototype
 * @old_size: par
 * @new_size: par
 * Description: reallocates a mem block using malloc and free
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	ptr = malloc(sizeof(unsigned int) * old_size);
	if (new_size > old_size)
	{
	ptr = realloc(ptr, sizeof(unsigned int) * new_size);
	}
	if (new_size == old_size)
	{
		return ((void *)ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		return (NULL);
	}
}
