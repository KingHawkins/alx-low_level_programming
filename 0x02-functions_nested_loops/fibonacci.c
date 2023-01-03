#include<stdio.h>
/*
 * f - fibonacci.
 * @b: parameter.
 *
 * Description: returns the fibonacci series of @b
 * Return: n if success 
 */
int fib(int b)
{
	if (b == 2 || b == 3)
	{
		return (b);
	}
	else 
		return (fib(b - 1) + fib(b - 2));
}
