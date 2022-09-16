#include"main.h"
/**
 * _isupper - is prototype
 * @c: parameter
 *
 * Description: checks if is upper
 * Return: 0 if success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
