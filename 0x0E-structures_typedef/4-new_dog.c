#include "main.h"
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: par
 * @age: par
 * @owner: par
 * Description: creates a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *new;

	*new = malloc(sizeof(dog_t));
	if (new == NULL)
		exit (1);

	new = strcpy(new->name, name);
	new = strcpy(new->owner, owner);
	free(new->name);
	free(new->owner);
	return (new_dog);
}
