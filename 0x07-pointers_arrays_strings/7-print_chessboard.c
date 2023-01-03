#include "main.h"
#include <stdlib.h>
/**
 * print_chessboard - prototype
 * @a: pointer to row in a 2D array
 */
void print_chessboard(char (*a)[8])
{
	int j, k, m;
	char ch[8][8];

	a = ch;

	for (j = 0; j < 8; j++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[j][k]);
		}
	}
	for (m = 0; m < 8; m++)
	{
		_putchar(a(int*)m);
	}
}
