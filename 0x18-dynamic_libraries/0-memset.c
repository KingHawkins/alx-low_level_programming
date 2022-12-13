#include "main.h"
#include <string.h>
/**
 * _memset - prototype
 * @s: pointer parameter
 * @b: second pointer paramter
 * @n: integer parameter
 * Description:  fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
