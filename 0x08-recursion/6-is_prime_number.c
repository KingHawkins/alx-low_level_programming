#include "main.h"
/**
 * is_prime_number - prototype
 * @n: parameter
 * Description: prints prime numbers
 * Return: 1 success else 0
 */
int is_prime_number(int n)
{
	int i;

	for (i = 2; i <= n/2; i++)
	{
		if (n % i != 0 && n % 5 != 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
