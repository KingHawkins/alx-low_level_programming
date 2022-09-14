#include<stdio.h>
#include<ctype.h>
/**
 * main - entry point.
 * _islower - main function.
 * @c:  character to compare.
 *
 * Return: Always 0 (success)
 * .
 * int _islower - Return: 1 if c is lowercase else 0.
 **/
int _islower(int c);
int main(void)
{
	int a;

	a = _islower('H');
	putchar(a + '0');
	a = _islower('o');
	putchar(a + '0');
	a = _islower(108);
	putchar(a + '0');
	putchar ('\n');
	return (0);
}
	int _islower(int c)
	{
		if (c != toupper(c))
		{
			return (1);
		}
		return (0);
	}
