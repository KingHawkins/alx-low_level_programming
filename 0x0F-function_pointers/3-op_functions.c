#include "3-calc.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * op_add - prototype
 * @a: par
 * @b: par
 * Description: returns sum
 * Return: sum
 */
int op_add(int a, int b)
{
	return ((a + b));
}
/**
 * op_sub - prototype
 * @a: par
 * @b: par
 * Description: returns diff
 * Return: diff
 */
int op_sub(int a, int b)
{
	return ((a - b));
}

/**
 * op_mul - prototype
 * @a: par
 * @b: par
 * Description: returns product
 * Return: product
 */
int op_mul(int a, int b)
{
	return ((a * b));
}

/**
 * op_div - prototype
 * @a: par
 * @b: par
 * Description: returns div
 * Return: div
 */
int op_div(int a, int b)
{
	return ((a / b));
}

/**
 * op_mod - prototype
 * @a: par
 * @b: par
 * Description: returns remainder
 * Return: mod
 */
int op_mod(int a, int b)
{
	return ((a % b));
}
