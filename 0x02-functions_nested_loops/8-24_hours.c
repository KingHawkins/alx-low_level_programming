#include"main.h"
#include<stdio.h>
/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59
 *
 * Return: Always 0 (success)
 **/
void jack_bauer(void)
{
	int i, k, n, j;

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 4; k++)
		{
			for (j = 0; j < 6; j++)
			{
				for (n = 0; n < 10; ++n)
				{
					if (i != 2 && k != 3 && j != 6 && n != 0)
					{
						printf("%d%d:%d%d", i, k, j, n);
						printf("\n");
					}
				}
			}
		}
	}
}
