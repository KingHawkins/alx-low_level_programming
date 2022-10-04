#include "main.h"
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
		printf("Failed\n");
		return (NULL);
	}
	if (strcmp(str, " ") == 0 || !strcmp(str, ""))
	{
		printf("Failed\n");
		return (NULL);
	}
	ptr = malloc(strlen(str) + 1);
	if (str == NULL)
	{
		printf("Failed\n");
		return (NULL);
	}
	n = strlen(str) + 1;
	while (i < n)
	{
		ptr[i] = str[i];
		++i;
	}
	printf("%s\n", ptr);
	free(ptr);
	return ((char**)ptr);
}
