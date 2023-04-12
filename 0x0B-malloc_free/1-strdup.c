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
char *holder = NULL;

int i;

int len;

if (str == NULL)
{
return (NULL);
}
while (str[len] != '\0')
{
len++;
}
if (holder == NULL)
{
return (NULL);
}
holder = (char *)malloc((len *sizeof(char)) + 1);
for (i = 0; str[i] != '\0'; i++)
{
holder[i] = str[i];
}
holder[i] = '\0';
return (holder);
free(holder);
}
