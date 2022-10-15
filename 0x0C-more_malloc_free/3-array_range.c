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
	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		j++;
	}
	i = 0;
	while (min <= max && i < (max - min))
	{
		ptr[i] = min;
		i++;
		min++;
	}
	free(ptr);
	return ((int *)ptr);
}
