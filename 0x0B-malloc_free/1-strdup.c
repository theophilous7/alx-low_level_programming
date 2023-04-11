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
if (str == NULL)
{
return (NULL);
}
char *holder = malloc(sizeof(str));
holder = str;
return (*holder);
}
