#include"main.h"
#include <stdbool.h>
#include<ctype.h>

/**
 * _isdigit - checks if digit is a number.
 * @c: parameter
 *
 * Description: checks if digit is a number
 * Return: 1 if digit else 0
 */
int _isdigit(int c);
{
	if (isdigit(c) == true)
	{
		return (1);
	}
	else
		return (0);
}

