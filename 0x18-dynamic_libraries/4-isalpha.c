#include"main.h"
#include<ctype.h>
#include<stdbool.h>
/**
 * _isalpha - entry point for the code.
 * @c: parameter checked if an alpha.
 *
 * Description: it checks if c is an alphabet or not
 * it returns a value based on whether c is an alphabet or not.
 * Return: 1 if @c is character else 0.
 */
int _isalpha(int c)
{
	if (isalpha(c) != false)
	{
		return (1);
	}
	else
		return (0);
}
