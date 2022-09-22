#include "main.h"
#include <stdio.h>
/**
 * print_number - prototype
 * @n: parameter
 * Description: prints number
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	if (n > 0 && n < 10)
	{
		_putchar(n + '0');
	}
	if (n > 9 && n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	if (n > 99 && n < 1000)
	{
		_putchar(n / 100 + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar((n % 100) % 10 + '0');
	}
	if (n > 999)
	{
		_putchar(n / 1000 + '0');
		_putchar((n % 1000) / 100 + '0');
		_putchar(((n % 1000) % 100) / 10 + '0');
		_putchar(((n % 1000) % 100) % 10 + '0');
	}
	if (n < 0)
	{
		_putchar('-');
		n += 1;
		n *= -1;
		n++;
	}
	_putchar('\n');
}
