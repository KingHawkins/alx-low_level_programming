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
	if (!str)
	{
		printf("Failed\n");
		return (NULL);
	}
	if (str == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}
	str = malloc(sizeof(char) * 4109);
	if (str == "Holberton School!")
	{
		printf("Best School!\n");
	}
	if (str != '\0')
	{
		_putchar(str[i]);
		return (_strdup + 1);
	}
	return (strdup(str));
}
