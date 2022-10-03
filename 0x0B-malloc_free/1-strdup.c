#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
 * _strdup - pareameter
 * @str: pointer
 * Description: returns a pointer to newly alloc
 * Return: 0 success
 */
char *_strdup(char *str)
{
	str = malloc(sizeof(char) * 4193);
	if (!str)
	{
		printf("Failed\n");
		return (NULL);
	}
	free(str);
	return (strdup(str));
}
