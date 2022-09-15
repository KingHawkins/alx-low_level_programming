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
	
	int last = n % 10;

	if (n < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
