#include"main.h"
#include"_putchar.c"
/**
 * print_alphabet - imlpementation for the code.
 *
 * Description: invokes the print_alphabet function which
 * prints alphabets in lowercase.
 * Return: If success, return 0 else 1.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch >= 'z'; ch++)
	{
		_putchar(ch);
	}
	putchar('\n');
}

