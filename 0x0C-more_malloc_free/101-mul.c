#include <stdlib.h>
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
	long int ptr;

	if (argc < 2)
	{
		printf("Enter two numbers\n");
	}
	if (argc > 1 && argc < 4)
	{
		ptr = (atol(argv[1]) * atol(argv[2]));
		printf("%ld\n", ptr);
	}
	if (argc > 3)
	{
		printf("Error\n");
	}
	return (0);
}
