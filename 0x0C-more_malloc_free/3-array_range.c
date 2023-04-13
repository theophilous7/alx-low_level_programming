#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - entry point
 * @min: first operand
 * @max: second operrand
 * Return: pointer
 */
int *array_range(int min, int max)
{
int i;
int *holder;

if (min > max)
{
return (NULL);
}
holder = malloc(max * sizeof(int));
if (holder == NULL)
{
return (NULL);
}
for (i = min; i <= max; i++)
{
memcpy(holder, i, max);
}
return (NULL);
}
