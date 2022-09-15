#include"main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @c: parameter to be checked.
 *
 * Description: Always 0 (success)
 * Return: 0 (success)
 **/
int print_last_digit(int c)
{
	int b;

	if (c < 0)
	{
		b =  -(c % 10);
		_putchar(b + '0');
		return (b);
	}
	else
	{
		b = (c % 10);
		_putchar(b + '0');
		return (0);
	}
}
