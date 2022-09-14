#include<stdio.h>
/**
 * main - entry point.
 * Description: returns the fibonacci of 100 series.
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 1, b = 2, c, i, number = 98;

	for (i = 3; i < number; ++i)
	{
		c = a + b;
		if (i != 97)
		{
			printf("%d, ", a);
		}
		if (i == 97)
		{
			printf("%d", a);
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
