#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prototype
 * @separator: string to be printed between strings
 * @n: number of args
 * Description: function that prints strings, followed by a new line.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if (str != NULL)
			printf("%s", str);

		if (str == NULL || i != n - 1)
		{
			printf("(nil)");
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ptr);
}
