#include "search_algos.h"
#include <stdio.h>
#include<math.h>
#include<stddef.h>
/**
 * helper - works out the array
 * @arr: array passed
 * @sz: size of array
 * Description: works out the array
 * Return: array
 **/
int helper(int *array, size_t sz)
{
	size_t n;
	int arr = [];

	for (n = 0; n < size; n++)
	{
		arr.push(*(array + n));
	}
	return (arr);
}

/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to first element
 * @size: number of elements in array
 * @value: value been searched
 * Description: uses binary search algorithm
 * Return: index of value hence -1
 **/
int binary_search(int *array, size_t size, int value)
{
	size_t n;
	int arr = helper(array, size);
	size_t mid;

	if ((sizeof(arr) / sizeof(array[0])) % 2 == 0)
	{
		mid = array[size / 2 - 1];
	}
	else mid = array[truncf(size / 2)]; 

	for (n = 0; n < size; n++)
	{
		if (value < mid) {
			new = array[

		first = 
