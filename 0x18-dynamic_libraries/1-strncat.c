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
	strncat(dest, src, n);
	return (dest);
}
