#include "main.h"
#include <stdio.h>

/**
 * print_line - prints line
 * @n: parameter
 *
 * Return: 0 if success
 */
void print_line(int n);
{
	int  i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
