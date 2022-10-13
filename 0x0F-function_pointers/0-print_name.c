#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: par
 * @f: par
 * Description: prints name
 */
void print_name(char *name, void (*f)(char *))
{
	int i;

	(*f)(name);
	if (!*f == NULL)
	{
		for (i = 0; name[i] != '\0'; i++)
		{
			_putchar(name[i]);
		}
	}
	_putchar('\n');
}
