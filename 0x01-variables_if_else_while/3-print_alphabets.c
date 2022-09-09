#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point.
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	char ch[27] = {"abcdefghijklmnopqrstuvwxyz\n"};
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(ch[i]);
	}
	for (i = 0; i < 27; i++)
	{
		ch[i] = toupper(ch[i]);
		putchar(ch[i]);
	}
	return (0);
}
