#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _isdigit - prototype
 * @c: parameter
 *
 * Description: checks if c is a digit or not
 * Return: 1 if success
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
		return (0);
}
