#include <stdio.h>
/**
 * main - entry point. Using putchar as the Output function
 *
 * Return: Always 0 (success)
 **/
int main(void)
{
	int i, j;
	char ch[] = {"abcdef"};

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (j = 0; j < 6; j++)
	{
		putchar(ch[j]);
	}
	putchar('\n');
	return (0);
}
