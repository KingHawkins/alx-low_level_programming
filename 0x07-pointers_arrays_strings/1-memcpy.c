#include "main.h"
#include <string.h>
/**
 * _memcpy - prototype
 * @dest: pointer
 * @src: second pointer parameter
 * @n: instance of bytes to be copied from src to dest
 * Description: copies n bytes from memory area src to memory area dest
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
