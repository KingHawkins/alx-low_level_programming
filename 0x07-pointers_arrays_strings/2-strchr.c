#include "main.h"
#include <string.h>
/**
 * _strchr - prototype
 * @s: pointer
 * @c: parameter
 * Description: returns a pointer to the first occurence
 * of character c in the string s
 * Return: returns a pointer if success else NULL
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
