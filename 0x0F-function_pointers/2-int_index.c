#include "function_pointers.h"
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
	int index, i;

	if (size <= 0)
		index = -1;

	if (cmp == NULL || array == NULL)
		index = -1;

	for (i = 0; i < size; i++)
	{
		if (isdigit(cmp(*(array + i))))
			index = i;

	}
	index = -1;
	return (index);
}
