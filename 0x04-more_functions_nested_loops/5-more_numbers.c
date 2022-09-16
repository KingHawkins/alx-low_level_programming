#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints more numbers
 *
 * Description: prints 1 to 14
 */
void more_numbers(void)
{
	int i;
	char j, c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			c = j;
			if (j > 9)
			{
				_putchar('1');
				c = j % 10;
			}
			_putchar(c + '0');
		}
		_putchar('\n');
	}
}
