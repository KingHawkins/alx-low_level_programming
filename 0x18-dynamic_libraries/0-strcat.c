#include "main.h"
#include <string.h>
/**
 * _strcat - prototype
 * @dest: parameter
 * @src: parameter
 * Description: concatenates two strings
 * Return: 0 success
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
