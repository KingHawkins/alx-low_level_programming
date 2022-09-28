#include "main.h"
/**
 * _print_rev_recursion - prototype
 * @s: pointer
 * Description: prints a string in reverse
 */
void _print_rev_recursion(char *s)
{
	int i;

	for (i = strlen(s) - 1; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}
