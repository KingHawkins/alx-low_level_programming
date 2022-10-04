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
	char *t;
	int i;
	int c = 0;


	if (str == NULL)
		return (NULL);

	while (str[c] != '\0')
		c++;

	t = malloc(sizeof(char) * c + 1);

	if (t == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		t[i] = str[i];

	return (t);

}
