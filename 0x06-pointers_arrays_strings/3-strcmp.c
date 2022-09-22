#include "main.h"
#include <string.h>
/**
 * _strcmp - prototype
 * @s1: first pointer parameter
 * @s2: second pointer parameter
 * Description: compares two strings
 * Return: 0 success
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		a++;
	}
	return (s1[i] - s2[i]);
}
