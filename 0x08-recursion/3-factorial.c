#include "main.h"
/**
 * factorial - prototype
 * @n: parameter
 * Description: prints factorial of n
 * Return: 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	while (n >= 0)
	{
		if (n == 1)
			return (1);
		else
			return (n * factorial(n - 1));
	}
}
