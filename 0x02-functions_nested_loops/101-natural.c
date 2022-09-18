#include<stdio.h>
/**
 * main - entry point.
 * Description: implementation of the function.
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;
	int sum = 0;


	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	i++;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
