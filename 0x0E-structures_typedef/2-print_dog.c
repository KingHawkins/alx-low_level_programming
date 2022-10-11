#include "main.h"
#include "dog.h"
/**
 * print_dog - prototype
 * @d: struct pointer
 * Description: prints struct dog
 */
void print_dog(struct dog *d)
{
	if (d.name == NULL)
	{
		printf("Name: (nil)\n")
	}
	else if (d.age == NULL)
	{
		printf("Age: (nil)\n");
	}
	else if (d.owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("%d\n", d.age);
		printf("%s\n", d.name);
		printf("%s\n", d.owner);
	}
}
