#include "main.h"

/**
 * print_square - prints square
 * @size: instances at which a square is printed
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (size > 0)
			{
				_putchar('#');
			}
		}
	}
	if (size == 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
