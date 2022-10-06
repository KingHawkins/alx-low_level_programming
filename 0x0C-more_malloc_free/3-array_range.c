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
	j = 0;
	for (i = min; i <= max; i++)
	{
		j++;
	}
	ptr = malloc(sizeof(int) * j);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min <= max)
	{
		t[i] = min;
		i++;
		min++;
	}
	free(ptr);
	return ((int *)ptr);
}
