#include "main.h"
#include <string.h>
#include <math.h>
/**
 * puts_half - prototype
 * @str: parameter
 * Description: prints half of a stringfollowed by a line
 */
void puts_half(char *str)
{
	 unsigned int i;

	for (i = floor((strlen(str) - 1) / 2) + 1; i <= strlen(str) - 2; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
