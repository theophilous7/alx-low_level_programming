#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * malloc_checked - entry point
 * @b: only operand
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
void *holder;

holder = malloc(b * sizeof(int));
if (holder == NULL)
{
exit(98);
free(holder);
}
return (holder);
free(holder);
}
