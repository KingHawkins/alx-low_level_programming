#include<stdio.h>
/**
 * main - entry point.
 * add - adds two integers.
 * @int: parametre to be used.
 * @int: parameter to be used.
 *
 * Description: Th add function adds two integers and returns  their result.
 * Return: 0 if success else 1.
 *
 */
int add(int a, int b)
{
	int c;

	c = (a + b);
	printf("%d", c);
	return (c);
}
