#include "main.h"
/**
 * _puts - prototype
 * @str: parameter
 * Description: puts a string
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
