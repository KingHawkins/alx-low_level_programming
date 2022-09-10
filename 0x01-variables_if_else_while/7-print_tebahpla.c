#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 **/
int main(void)
{
	char ch[] = {"abcdefghijklmnopqrstuvwxyz"};
	int i;

	for (i = 27; i >= 0; i--)
	{
		putchar(ch[i]);
	}
	putchar('\n');
	return (0);
}
