#include<stdio.h>
#include<stdlib.h>
/**
 * main - entry point. Using putchar to print integers.
 *
 * Return: Always 0 (success)
 **/
int main(void)
{
	int i, j, k, n;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 9; j++)
	{
	for (k = 0; k < 10; k++)
	{
	for (n = 1; n < 10; n++)
		{
		if (n != (k || j || i))
			putchar(i + '0');
			putchar(j + '0');
			putchar(' ');
			putchar(k + '0');
			putchar(n + '0');
		if (i != 9 || j != 8 || k != 9 || n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		}
		}
	}
	}
	}
	putchar('\n');
	return (0);
}
