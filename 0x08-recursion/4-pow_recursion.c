#include "main.h"
#include <math.h>
/**
 * _pow_recursion - prototype
 * @x: parameter
 * @y: parameter
 * Description: prints power of a number
 * Return: poweer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
