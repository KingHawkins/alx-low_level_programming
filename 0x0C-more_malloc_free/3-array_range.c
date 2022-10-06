#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - prototype
 * @min: min par limit
 * @max: max par limit
 * Description: creates array of integers
 * Return: pointer (success) else NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min));
	if (!ptr)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		for (j = 0; j < (max - min); j++)
		{
			ptr[j] = i;
		}
	}
	free(ptr);
	return ((int *)ptr);
}
