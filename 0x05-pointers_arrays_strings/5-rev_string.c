#include "main.h"
#include <string.h>
/**
 * rev_string - prototype
 * @s: parameter
 * Description: prints character in reverse
 */
void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);

	}
}
