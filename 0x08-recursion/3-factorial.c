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
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
