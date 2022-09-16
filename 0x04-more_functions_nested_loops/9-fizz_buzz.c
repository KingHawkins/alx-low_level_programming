#include <stdio.h>
/**
 * main - main function
 *
 * Return: 1 if success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
		}
		if (i % 5 != 0 && i % 3 != 0)
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
