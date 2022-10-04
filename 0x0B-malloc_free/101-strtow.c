#include <stdlib.h>
#include<ctype.h>
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
	int i = 0;
	char *ptr;
	int n;

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
	n = strlen(str) + 1;
	while (i < n)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			ptr[i] = '\0';
		}
		else
		{
			ptr[i] = str[i];
		}
		++i;
	}
	printf("%s\n", ptr);
	return ((char **)ptr);
}
