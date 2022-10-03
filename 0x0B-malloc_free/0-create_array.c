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
	int i;
	int j;

	i = 0;
	str = &c;
	str = malloc(sizeof(char) * 20);
	if (str == NULL || str == "")
	{
		return (NULL);
	}
	while (i < size)
	{
		printf("%c ", str[i]);
		i++;
		return ((char*)str);
	}
	free(str);
}
