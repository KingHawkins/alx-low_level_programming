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

	for (i = 0; i <= (strlen(str) - 1) / 2; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
