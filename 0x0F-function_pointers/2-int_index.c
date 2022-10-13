#include "function_pointers.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * int_index - prototype
 * @array: par
 * @size: par
 * @cmp: func pointer
 * Description: searches for an integer
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
