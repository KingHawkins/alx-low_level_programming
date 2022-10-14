#include "variadic_functions.h"
#include <string.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prototype
 * @format: arg no.
 * Description: prints anything
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	int i, n, j;
	char t[] = "cifs";

	i = 0;
	n = strlen(format) + 1;
	va_start(ptr, format);
	while (i < n)
	{
		j = 0;
		while (t[j] != '\0')
		{
			if (format[i] == t[j])
			{
				switch (format[i])
				{
					case 'c':
						printf("%c", va_arg(ptr, int));
						va_end(ptr);
						printf("\n");
						break;
					case 'i':
						printf("%d", va_arg(ptr, int));
						va_end(ptr);
						printf("\n");
						break;
					case 'f':
						printf("%f", va_arg(ptr, double));
						va_end(ptr);
						printf("\n");
						break;
					case 's':
						if (va_arg(ptr, char *) == NULL)
							printf("(nil)");

						printf("%s", va_arg(ptr, char *));
						va_end(ptr);
						printf("\n");
						break;
					j++;
				}
		i++;
		}
	}
}
}
