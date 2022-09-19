#include "main.h"
#include <string.h>
/**
 * puts2 - prototype
 * @str: parameter
 * Description: prints every character of a string
 */
void puts2(char *str)
{
	long int i = strlen(str) - 1;

	while (*str)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	*str++;
	}
	_putchar('\n');
}
