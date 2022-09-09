#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *main - Entry point for code.
 *Return: Always 0 (success)
 **/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

