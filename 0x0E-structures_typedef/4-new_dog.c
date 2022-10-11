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
	scanf("%s%e%s\n", &(char *)name, &age, &(char *)owner);
}
