#include "main.h"
#include <stdio.h>
/**
 * print_line - prints line
 *
 * @n: first integer
 */
void print_line(int n)
{
	int i;

	while (i < n && n > 0)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
