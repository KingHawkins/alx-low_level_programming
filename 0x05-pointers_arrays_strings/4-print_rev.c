#include "main.h"
#include <string.h>
/**
 * print_rev - prototype
 * @s: parameter
 * Description: prints character in reverse
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; *s; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
