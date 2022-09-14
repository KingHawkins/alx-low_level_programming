#include<stdio.h>
#include"fibonacci.c"
/**
 * main - entry point.
 * Description: Works to calculate fibonacci series.
 * Return: Always 0 (success)
 */
int main(void)
{
	int counter = 2;
	long int a = 1;
	long int b = a + 1;
	long int c = a + b;

	printf("%ld, %ld, ", a, b);
	while (counter < 50)
	{
		printf("%ld", c);
		if (counter != 49)
		{
			printf(", ");
		}
		counter++;
		a = b;
		b = c;
		c = a + b;
	}
	printf("\n");
	return (0);
}
