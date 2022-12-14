#include "main.h"
#include <string.h>
/**
 * _strpbrk - prototype
 * @s: first pointer parameter
 * @accept: second pointer parameter
 * Description: Returns a pointer to the byte in s that
 * matches one of the bytes in accept, or NULL if no such byte is found
 * Return: NULL pointerr if failure else a pointer if success
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
