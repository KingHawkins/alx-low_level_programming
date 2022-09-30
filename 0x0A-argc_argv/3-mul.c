#include <stdio.h>
#include <stdlib.h>
#include "_putchar.c"
/**
 * main - entry point
 * @argc: argument
 * @argv: argument vector
 * Description: prints result of multiplication of two numbers
 * Return: 0 succcess
 */
int main(int argc, char *argv[])
{
	int a, res, b;

	if (argc < 2)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	res = a * b;
	printf("%d\n", res);
	return (0);
}
