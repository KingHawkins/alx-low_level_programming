#include "main.h"
/**
 * is_prime_number - prototype
 * @n: parameter
 * Description: prints prime numbers
 * Return: 1 success else 0
 */
int is_prime_number(int n)
{
	int i, a;

	for (i = 2; i <= n/2; i++)
	{
		if (n % i != 0 && n % 5 != 0)
		{
			a = 1;
		}
		else
		{
			a = 0;
		}
	}
	return (a);
}
