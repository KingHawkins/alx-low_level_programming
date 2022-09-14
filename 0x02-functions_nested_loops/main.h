#include<stdio.h>
#include<unistd.h>
#include<ctype.h>
/**
 * entry point
 */
void print_alphabet(void)
{
	char ch[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		ch[i] = tolower(ch[i]);
		putchar(ch[i]);
	}
}

