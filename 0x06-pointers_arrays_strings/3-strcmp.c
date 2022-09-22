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
	int a;

	if (strcmp(s1, s2))
	{
		if (s1 > s2)
		{
			a = 15;
		}
		else if (s1 < s2)
		{
			a = -15;
		}
		else
		{
			a = 0;
		}
	}
	return (a);
}
