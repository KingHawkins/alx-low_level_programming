#include "main.h"
/**
 * add - adds two integers.
 * @a: parametre to be used.
 * @b: parameter to be used.
 *
 * Description: Th add function adds two integers and returns  their result.
 * Return: 0 if success else 1.
 *
 */
int add(int a, int b)
{
	int c = a + b;

	if (c < 0)
	{
		c = -c;
		if (c > -100)
		{
			_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
		}
		else
		{
			_putchar(c / 100 + '0');
			_putchar((c % 100) / 10 + '0');
			_putchar((c % 100) % 10 + '0');
		}
	}
	if (c == 0)
	{
		_putchar('0');
	}
	if (c < 10)
	{
		_putchar(c + '0');
	}
	if (c > 10 && c < 100)
	{
		_putchar(c / 10 + '0');
		_putchar(c % 10 + '0');
	}
	if (c >= 100)
	{
		_putchar(c / 100 + '0');
		_putchar((c % 100) / 10 + '0');
		_putchar((c % 100) % 10 + '0');
	}
_putchar('\n');
return (c);
}
