#include "main.h"
#include <string.h>
/**
 * _strspn - prototype
 * @s: first ppinter parameter
 * @accept: second pointer parameter
 * Description: returns number of bytes in the initial segment of s
 * which consist of only bytes from accept
 * Return: succes
 */
unsigned int _strspn(char *s, char *accept)
{
	strspn(s, accept);
	return (s);
}
