#include <stdio.h>
/**
 * main - entry point.
 *
 * Return: Always 0 (success)
 **/
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i != 0 || j != 0 || k != 0)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i != 1 || j != 2 || k != 0)
					{
						putchar(',');
						putchar(' ');
						break;
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
