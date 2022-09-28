#include "main.h"
#include <stdlib.h>
/**
 * _puts_recursion - prototype
 * @s: pointer parameter
 * Description: puts a string to stdoutput
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
