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
	int i;
	char *ptr;

	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * 4193);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (str[i] <= '\0')
	{
		ptr[i] = str[i];
		++i;
	}
	free(ptr);
	return ((char **)ptr);
}
