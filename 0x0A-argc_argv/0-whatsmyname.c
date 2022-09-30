#include <stdio.h>
/**
 * main - function
 * @argc: commad line arg
 * @argv: argument vector
 * Description: prints its name folloed by a new line
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
