#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - entry point
 * @d: first
 * @name: second
 * @age: third
 * @owner: fourth
 * Return: pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
d = malloc(sizeof(struct dog));
}
d->name = name;
d->age = age;
d->owner = owner;
}
