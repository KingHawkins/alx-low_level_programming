#include<stdio.h>
#include"main.h"
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
	char *res;
	int i;

	i = 0;
	if (!str)
	{
		printf("Failed\n");
		res = NULL;
	}
	if (str == NULL)
	{
		printf("failed to allocate memory\n");
		res = NULL;
	}
	str = malloc(sizeof(char) * 4109);
	if (str[i] != '\0')
	{
		printf("%s\n", str);
		res = strdup(str);
		i++;
	}
	free(str);
	return ((char*)res);
}
