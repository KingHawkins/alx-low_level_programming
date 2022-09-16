#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - is prototype
 * @c: parameter
 *
 * Description: checks if is upper
 * Return: 0 if success
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
		return (0);
}
