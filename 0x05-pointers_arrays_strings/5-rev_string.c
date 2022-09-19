#include "main.h"
#include <string.h>
/**
 * rev_string - prototype
 * @s: parameter
 * Description: prints character in reverse
 */
void rev_string(char *s)
{
	int i;
	char t;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	for (i = strlen(s) - 1; i > -1; i--)
	{
		t = (s[i]);
	}
}
