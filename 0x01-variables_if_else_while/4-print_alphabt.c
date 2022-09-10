#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - entry point.
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	char ch[27] = {"ABCDFGHIJKLMNOPRSTUVWXYZ\n"};
	int i;

	for (i = 0; i < 27; i++)
	{
		ch[i] = tolower(ch[i]);
		putchar(ch[i]);
	}
	return (0);
}
