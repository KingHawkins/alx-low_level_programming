#include "main.h"
#include<stdbool.h>
#include<ctype.h>

/**
 * _isupper - checks if c is uppercase
 * @c: parameter to be checked
 *
 * Description: checks if c is uppercase
 * Return: 1 if c isupper else 0
 */
int _isupper(int c)
{
	if (c != isdigit(c))
	{
		return (1);
	}
	else
		return (0);
}
