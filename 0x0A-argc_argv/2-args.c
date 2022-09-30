#include <stdio.h>
/**
 * main - entry point
 * @argc: argument
 * @argv: argument vector
 * Description: prints all arguments it receives
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
