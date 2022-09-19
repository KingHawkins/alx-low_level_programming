#include "main.h"
#include <string.h>
/**
 * rev_string - prototype
 * @s: parameter
 * Description: prints character in reverse
 */
void rev_string(char *s)
{
	while (*s)
	{
		_putchar(*s--);

	}
	_putchar('\n');
}
