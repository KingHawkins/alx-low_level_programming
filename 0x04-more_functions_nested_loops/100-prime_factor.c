#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints prime factors
 * Return: 0 if success else 1
 */
int main(void)
{
	unsigned int a = 2;
	unsigned int n = 612852475143;

	while (a != n)
	{
		if (n % a == 0)
		{
			n = n / a;
		}
		else
		{
			a++;
		}
	}
	printf("%lu\n", n);
	return (0);
}
