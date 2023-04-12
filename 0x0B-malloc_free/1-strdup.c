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

int i;

int len;

if (str == NULL)
{
return (NULL);
}
len = strlen(str);
}
holder = (char *) malloc((len + 1) * sizeof(char));
for (i = 0; str[i] != '\0'; i++)
{
holder[i] = str[i];
}
holder[i] = '\0';
return (holder);
}
