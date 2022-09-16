#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints more numbers
 *
 * Description: prints 1 to 14
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 'F'; j++)
		{
			_putchar(i + '0');
			if (j >= 'A' && j <= 'E')
			{
				_putchar(j);
			}
		}
		_putchar('\n');
	}
}
