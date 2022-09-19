#include "main.h"
#include <string.h>
/**
 * puts_half - prototype
 * @str: parameter
 * Description: prints half of a stringfollowed by a line
 */
void puts_half(char *str)
{
	int i;

	for (i = (strlen(str) - 1) / 2; i >= 0; i++)
	{
		_putchar(str[i]);
	}
}
