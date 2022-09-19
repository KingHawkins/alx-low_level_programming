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
	long int n = strlen(str) - 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
