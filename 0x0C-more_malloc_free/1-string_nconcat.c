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
	char *ptr;

	ptr = malloc(sizeof(*s2) + sizeof(*s1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr = strncat(s1, s2, n);
	free(ptr);
	return ((char *)ptr);
}
