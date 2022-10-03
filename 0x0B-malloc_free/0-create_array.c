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
	str = &c;
	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		printf("%c ", str[i]);
		i++;
	}
	return ((char*)str);
	free(str);
}
