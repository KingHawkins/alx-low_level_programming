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
	if (size == 0)
	{
		printf("failed to allocate memory\n");
	}
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", str[i]);
		i++;
	}
	printf("\n");
	free(str);
	return ((char *)str);
}
