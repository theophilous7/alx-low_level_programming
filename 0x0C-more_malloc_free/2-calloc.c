#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - entry point
 * @nmemb: first operand
 * @size: second operand
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void* holder;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

holder = malloc(nmemb * size);
if (holder == NULL)
{
return (NULL);
}
memset(holder, 0, nmemb * size);
return (holder);
}
