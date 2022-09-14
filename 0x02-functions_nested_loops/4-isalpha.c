#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
/**
 * main - Entry point.
 *
 * _isalpha() : If c is number, it returns 1 else 0.
 *
 * @c: parameter checked if an alpha.
 *
 * Return: Always 0 (success).
 *
 * _isalpha(): Return 1 if @c is character else 0.
 *
 **/
int _isalpha(int c);
int main(void)
{
	int a;

	a = _isalpha('H');
	putchar(a + '0');
	a = _isalpha('o');
	putchar(a + '0');
	a = _isalpha(108);
	putchar(a + '0');
	a = _isalpha(';');
	putchar(a + '0');
	putchar('\n');
	return (0);
}
int _isalpha(int c)
{
	if (isalpha(c) != false)
	{
		return (1);
	}
	else
		return (0);
}
