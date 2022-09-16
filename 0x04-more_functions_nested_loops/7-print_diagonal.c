#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints diagnal
 * @n: parameter
 *
 * Description: prints a diagonal based on n instances
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar(" ");
		}
	}
	_putchar('\');
	_putchar('\n');
}
