#include "main.h"
/**
 * _isupper - prototype
 * @c: parameter
 * Description: checks if a c is uppercase
 * Return: 1 if success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
