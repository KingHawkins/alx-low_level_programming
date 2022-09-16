#include "main.h"
#include <stdio.h>
/**
 * print_line - prints line
 *
 * @n: first integer
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
