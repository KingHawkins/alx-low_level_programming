#include "main.h"

/**
 * _isupper - checks if c is uppercase
 * @c: parameter to be checked
 *
 * Description: checks if c is uppercase
 * Return: 1 if c isupper else 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
