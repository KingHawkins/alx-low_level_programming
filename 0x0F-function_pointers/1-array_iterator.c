#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - prototype
 * @array: array par
 * @size - size of array
 * @action: func pointer
 * Description: executes a function given as a parameter on each element
 * of an array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	(*action)(*array);

	if (action == NULL || array == NULL)
		exit (1);

	if (*action)
	{
		for (i = 0; i < size; i++)
		{
			printf("%d\n", *(array + i));
		}
	}
}
