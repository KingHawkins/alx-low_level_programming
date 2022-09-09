#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return : Always 0 (Success)
 *
**/ 
int main(void)
{
	int n;
	int last_num;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		last_num = n % 10;
		printf("Last digit of %d is %d and is greater than 5\n", n, last_num);
	}
	else if (n == 0)
	{
		last_num = n % 10;
		printf("Last digit of %d is %d and is zero\n", n, last_num);
	}
	else if ((n < 6) != 0)
	{
		last_num = n % 10;
		printf("Last digit of %d is %d and is less than 6 and not zero\n", n, last_num);
	}
	return (0);
}
