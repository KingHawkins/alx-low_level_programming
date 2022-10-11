#include <stdio.h>
#include <stdlib.h>
#include <libgen.h>
/**
 * main - prototype
 * Description: prints name of file program was compiled from
 * Return: 0 success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
