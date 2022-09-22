#include "main.h"
#include <string.h>
/**
 * _strncpy - prototype
 * @dest: first pointer parameter
 * @src: second pointer parameter
 * @n: comparison
 * Description: copies portion of content of src to dest
 * Return: 0 success
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
