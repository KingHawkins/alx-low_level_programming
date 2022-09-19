#include "main.h"
#include <string.h>
/**
 * puts2 - prototype
 * @str: parameter
 * Description: prints every character of a string
 */
void puts2(char *str)
{
	while (*str)
	{
		int i;

		i = *(str++ + 2);
		_putchar(i);
		*str++;
	}
	_putchar('\n');
}
