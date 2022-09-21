#include "main.h"
#include <string.h>
/**
 * _strncat - prototype
 * @dest: First pointer parameter
 * @src: Second pointer parameter
 * @n: comparison parameter
 * Description: concatenates an array of strings
 * Return: 0 success
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		strncat(*dest, *src);
	}
	return (*dest);
}
