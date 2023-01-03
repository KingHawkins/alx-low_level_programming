#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - prototype
 * @argc: par1
 * @argv: parameter 2
 * Description: multiplys two numbers
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	long double ptr;

	if (argc < 2)
	{
		printf("Enter two numbers\n");
	}
	if (argc > 1 && argc < 4)
	{
		ptr = (strtod((argv[1]), sizeof(argv[1])) * strtod((argv[2]), sizeof(argv[2]));
		printf("%Lf\n", ptr);
	}
	if (argc > 3)
	{
		printf("Error\n");
	}
	return (0);
}
