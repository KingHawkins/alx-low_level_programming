#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * main - the implementation of the code is here.
 *
 * Return: Always 0 (success)
 **/
int main(void)
{
	char ch[26] = {"abcdefghijklmnopqrstuvwyz\n"};
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(ch[i]);
	}
	return (0);
}
