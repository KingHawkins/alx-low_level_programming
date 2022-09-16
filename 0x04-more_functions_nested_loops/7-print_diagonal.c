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
	int i, j;

	i = 0;
	while (n > 0 && i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(32);
			j++;
		}
		_putchar(92);
		_putchar('\n');
		i++;
	}
	if (i == 0)
	{
		_putchar('\n');
	}
}
