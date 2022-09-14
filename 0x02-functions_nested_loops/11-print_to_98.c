#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "_putchar.c"
/**
 * main - the main function
 * print_to_98 - prints to 98.
 * @n: the parameter
 * 
 * Description: The function prints from n to 98.
 * Return: Always 0 (success)
 * print_to_98 - Return: 0 if success else 0.
 */
void print_to_98(int n);
int main(void)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
	return (0);
}
void print_to_98(int n)
{

	if (n == 0)
	{
		while (n < 99)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			if (n < 10)
			{
				_putchar(n + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		 n++;
		}
	}
	else if (n == 98)
	{
		_putchar((n / 10) + '0');                                     
		_putchar((n % 10) + '0');
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n > 99)
			{
				_putchar((n / 100) + '0');
				_putchar((n % 100) + '0');
			}
			if (n < 100)
			{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			}
			if ( n!= 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if ( n < 10)
			{
				_putchar((n % 10) + '0');
			}
			if ( n >= 10)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (n < 0)
			{
				_putchar(-n % 10 + '0');
				
			}
			n++;
		}
	}		
	_putchar('\n');
}	
