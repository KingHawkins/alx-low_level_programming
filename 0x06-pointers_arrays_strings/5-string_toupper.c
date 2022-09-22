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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = toupper(s[i]);
		_putchar(s[i]);
	}
	return (s);
}
