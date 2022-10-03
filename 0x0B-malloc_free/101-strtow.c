#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strtow - prototype
 * @str: parameter
 * Deescription: splits a string into words
 * Return: 0 success
 */
char **strtow(char *str)
{
	int i;

	str = malloc(sizeof(char) * 20);
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		printf("%s\n", str);
		++i;
		return ((char**)str);
	}
	free(str);
}
