#include "search_algos.h"
#include<stdio.h>
#include<stddef.h>
/**
 * linear_search - searches for a value in array of integers
 * @array: pointer to first element of array to search in
 * @size: number of elements in an array
 * @value: value to search for
 * Description: uses linear search algorithm to search for value
 * Return: return value else -1
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t n;

	for (n = 0; n < size; n++)
	{
		printf("Value checked array[%ld] = [%d]\n", n, *(array + n));
		if (value == *(array + n))
		{
			return (n);
		}
	}
	return (-1);
}
