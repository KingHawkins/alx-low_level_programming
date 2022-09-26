#include "main.h"
/**
 * set_string - prototype
 * @s: pointer to a pointer
 * @to: pointer parameter
 * Description: t sets the value of a pointer to a char.
 */
void set_string(char **s, char *to)
{
	s = &to;

	while (**s)
	{
		_putchar(**s++);
	}
}
