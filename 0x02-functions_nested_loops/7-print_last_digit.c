#include"main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: parameter to be checked.
 *
 * Description: Always 0 (success)
 * Return: 0 (success)
 **/
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
	last = -last;
	}
	_putchar(last + '0');
	return (last);
}
