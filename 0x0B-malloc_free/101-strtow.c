#include "main.h"
#include<ctype.h>
#include <stdlib.h>
#include<string.h>
#include <stdio.h>
/**
 * strtow - prototype
 * @str: parameter
 * Deescription: splits a string into words
 * Return: 0 success
 */
char **strtow(char *str)
{
	int i, n;
	char *ptr;

	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(5000);
	if (ptr == NULL)
	{
		return (NULL);
	}
	n = strlen(str) + 1;
	while (i < n)
	{
		ptr[i] = str[i];
		printf("%s\n", ptr);
		++i;
	}
	free(ptr);
	return ((char **)ptr);
}
