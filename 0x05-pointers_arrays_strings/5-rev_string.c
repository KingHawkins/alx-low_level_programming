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

	for (i = strlen(s) - 1; *s; i--)
	{
		_putchar(s[i]);

	}
}
