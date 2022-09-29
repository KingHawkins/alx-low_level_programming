#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - prototype
 * @s: pointer
 * Description: prints a string in reverse
 */
void _print_rev_recursion(char *s)
{
	int i = strlen(s) - 1;

	if (i != 0)
	{
		_putchar(s[i]);
		_print_rev_recursion(s - 1);
	}
}
