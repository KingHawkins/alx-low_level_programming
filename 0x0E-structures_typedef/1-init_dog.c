#include "dog.h"
/**
 * init_dog - prototype
 * @d: struct
 * @name: property of struct
 * @age:prototype of struct
 * @owner: prototype of struct
 * Description: init a struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
