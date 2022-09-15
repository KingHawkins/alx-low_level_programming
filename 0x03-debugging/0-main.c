#include"main.h"
/**
 * positive_or_negative - testing for a positive or negative value.
 * @i: parameter to be used.
 * Return: Always 0 (success)
 **/
int positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative", i);
	}
	else
		printf("%d is positive", i);
}
