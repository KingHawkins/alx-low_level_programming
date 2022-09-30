#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc: parameter
 * @argv: command line vector
 * Description: prints number of arguements passed into it
 * Return: 0 sucess
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (argv[i])
		{
			if (i == argc - 1)
			{
				_putchar(i + '0');
				_putchar('\n');
			}
		}
	}
	return (0);
}
