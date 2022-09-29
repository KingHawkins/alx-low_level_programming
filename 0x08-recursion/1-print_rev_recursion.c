#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - prototype
 * @s: pointer
 * Description: prints a string in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
