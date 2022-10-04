#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - prototype
 * @size: parameter
 * @c: parameter
 * Description: cretes an array of char
 * Return: 0 success
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	i = 0;
	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	while (i <= size)
	{
		str[i] = c;
		i++;
	}
	free(str);
	return ((char *)str);
}
