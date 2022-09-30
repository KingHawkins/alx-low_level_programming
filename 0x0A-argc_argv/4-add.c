#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * main - entry point
 * @argc: argument
 * @argv: arguement vector
 * Description: adds two agrc values
 * Return:0 success
 */
int main(int argc, char *argv[])
{
	int a, i, j;

	a = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				puts("Error");
				return (1);
			}
		}
			a  += atoi(argv[i]);
	}
	printf("%d\n", a);
	return (0);
}	
