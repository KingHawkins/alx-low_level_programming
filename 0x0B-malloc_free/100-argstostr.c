#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
 * argstostr - prototype
 * @ac: par
 * @av: par
 * Description: concatenates args
 * Return: 0 success
 */
char *argstostr(int ac, char **av)
{
	char **ptr;
	int i, n;

	if (av == NULL)
	{
		return (NULL);
	}
	ptr = malloc((sizeof(char) * ac) + 47);
	if (ac == 0)
	{
		return (NULL);
	}
	n = strlen((char *)av) + 1;
	for (i = 0; i < n; ++i)
	{
		ptr[i] = av[i];
	}
	printf("%s\n", (char *)ptr);
	free(ptr);
	return ((char *)ptr);
}
