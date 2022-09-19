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
		if ((strlen(str) - 1) % 2 == 0)
		{
			_putchar(*str);
		}
	}
}
