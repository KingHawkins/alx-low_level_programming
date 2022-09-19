#include "main.h"
#include <string.h>
/**
 * rev_string - prototype
 * @s: parameter
 * Description: prints character in reverse
 */
void rev_string(char *s)
{
	while (strlen(s) - 1)
	{
		_putchar(*s--);

	}
}
