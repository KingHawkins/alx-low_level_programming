#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * str_concat - prototype
 * @s1: par
 * @s2: par
 * Description: returns concatenate
 * Result : 0 success
 */
char *str_concat(char *s1, char *s2)
{
	char *str;

	strcat(s1, s2);
	str = malloc(sizeof(char) * sizeof(*s1));
	free(str);
	return (str);
}
