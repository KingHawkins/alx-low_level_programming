#include<stdio.h>
/**
 * main - entry point.
 * Description: returns the fibonacci of 100 series.
 * Return: Always 0 (success)
 */
int main(void)
{
	int counter = 2;
	long unsigned int a = 1;
	long unsigned int b = a + 1;
	long unsigned int c = a + b;

	while (counter < 98)
	{
		c = a + b;
		printf("%lu", a);
		counter++;
		if (counter != 98)
		{
			printf(", ");
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
