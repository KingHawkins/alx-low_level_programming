#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 **/
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; c++)
	{
		for (j = '0'; j <= '9'; j++)
			{
			if (i < j)
			{
				putchar(i);
				putchar(j);
					if (i != '8' || (j == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
