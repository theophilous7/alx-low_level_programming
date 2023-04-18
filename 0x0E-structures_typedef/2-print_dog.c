#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * print_dog - entry point
 * @d: only operand
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
printf("nothing\n");
}
if (d->name == NULL)
{
printf("Name: (nil)\n");
}
if (d->owner == NULL)
{
printf("Owner: (nil)\n");
}
printf("Name: %s\n", d->name);
printf("Name: %.1f\n", d->age);
printf("Owner: %s\n", d->owner);
}
