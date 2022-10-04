#include<stdio.h>
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
	char *ptr;
	int i;

	if (av == NULL)
	{
		return (NULL);
	}
	ptr = malloc((sizeof(char) * ac));
	if (ac == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; ++i)
	{
		printf("%s\n", av[i]);
	}
	free(ptr);
	return ((char *)ptr);
}
