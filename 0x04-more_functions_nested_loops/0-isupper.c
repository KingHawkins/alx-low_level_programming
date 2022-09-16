#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - prototype
 * @c: parameter
 * Description: checks if a c is uppercase
 * Return: 1 if success
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
