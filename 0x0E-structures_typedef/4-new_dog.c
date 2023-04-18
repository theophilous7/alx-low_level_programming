#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - entry point
 * @name: first operand
 * @age: second operand
 * @owner: third operand
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t* dog;

dog = (dog_t *)malloc(sizeof(dog_t));
if (dog == NULL)
{
return (NULL);
}
dog->name = malloc(strlen(name) + 1);
if (dog->name == NULL)
{
free(dog->name);
return (NULL);
}
strcpy(dog->name, name);
dog->age = age;
dog->owner = malloc(strlen(owner) + 1);
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
strcpy(dog->owner, owner);
return (dog);
}
