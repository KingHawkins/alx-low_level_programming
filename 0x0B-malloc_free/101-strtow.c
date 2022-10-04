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
	if (str == NULL || isspace(str))
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * 4193);
	if (ptr == NULL)
	{
		return (NULL);
	}
	n = strlen(str) + 1;
	while (i < n)
	{
		ptr[i] = str[i];
		if (isspace(ptr[i]))
		{
			putchar('\n');
		}
		printf("%s\n", ptr);
		++i;
	}
	free(ptr);
	return ((char **)ptr);
}
