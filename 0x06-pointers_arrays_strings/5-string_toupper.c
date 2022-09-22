#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - prototype
 * @s: pointer parameter
 * Description: changes lowercase to upper
 * Return: 0 success
 */
char *string_toupper(char *s)
{
	return (toupper(*s));
}
