#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * str_concat - prototype
 * @s1: par
 * @s2: par
 * Description: returns concatenate
 * Return: 0 success
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;

	strcat(s1, s2);
	str = malloc(sizeof(char) * 4108);
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
		printf("%s\n", str);
	}
	free(str);
	return (s1);
}
