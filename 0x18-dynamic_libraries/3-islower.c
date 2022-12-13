#include"main.h"
#include<ctype.h>
/**
 * _islower - main function.
 * @c:  character to compare.
 *
 * Description: checks if n is lower
 * Return: 1 if c is lowercase else 0.
 **/
int _islower(int c)
{
	if (c != toupper(c))
	{
		return (1);
	}
	else
		return (0);
}
