#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: returns a andom number
 * Return: 0 success
 */
int main(void)
{
	unsigned long int password;

	srand(time(NULL));
	password = rand() - RAND_MAX / 2;
	printf("%lu\n", password);
	return (0);
}	
