#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - entry point
 * @str: only operand
 * Return: pointer
 */
char *_strdup(char *str)
{
char *holder;

if (str == NULL)
{
return (NULL);
}
holder = malloc(sizeof(str));
holder = str;
return (holder);
}
