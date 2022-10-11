#include "main.h"
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prototype
 * @d: struct pointer
 * Description: prints struct dog
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("%f\n", d->age);
		printf("%s\n", d->name);
		printf("%s\n", d->owner);
	}
}
