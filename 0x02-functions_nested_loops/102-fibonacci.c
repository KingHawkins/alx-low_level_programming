#include<stdio.h>
/**
 * main - entry point.
 * Description: Works to calculate fibonacci series.
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 1, b = 2, c, i, number = 50;

	for (i = 3; i < number; ++i)
	{
		c = a + b;
		if (i != 49)
		{
			printf("%d, ", a);
		}
		if (i == 49)
		{
			printf("%d", a);
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
