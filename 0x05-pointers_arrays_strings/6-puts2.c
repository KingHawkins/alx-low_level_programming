#include "main.h"
#include <string.h>
/**
 * puts2 - prototype
 * @str: parameter
 * Description: prints every character of a string
 */
void puts2(char *str)
{
	long int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
