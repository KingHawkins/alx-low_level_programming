#include "variadic_functions.h"
#include <stdarg.h>
#include<stdio.h>
/**
 * print_numbers - prototype
 * @separator: par
 * @n: par
 * @...: variable par
 * Description: prints numbers followed by a new line
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int val;
	va_list vl;

	va_start(vl, n);
	for (i = 0; i < n; i++)
	{
		val = va_arg(vl, int);
		printf("%d", val);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(vl);
	printf("\n");
}
