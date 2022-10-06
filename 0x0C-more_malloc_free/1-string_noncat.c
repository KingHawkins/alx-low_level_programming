#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * string_noncat - prototype
 * @s1: par
 * @s2: par
 * @n: par
 * Description: concatenates two strings
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, *ptr2;
	unsigned int i, j;

	for (i = 0; i < n; i++)
	{
		ptr = strcat(s1, s2);
	}
	ptr2 = malloc(sizeof(ptr));
	if (ptr2 == NULL)
	{
		return (NULL);
	}
	ptr2 = ptr;
	free(ptr2);
	return ((char *)ptr2);
}
