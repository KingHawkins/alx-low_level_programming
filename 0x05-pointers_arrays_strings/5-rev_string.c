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

	for (i = strlen(s) - 1; i > -1; i--)
	{
		char t = s[i];
		_putchar(t);
	}
	_putchar('\n');
}
