#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - entry point
 * @s1: first operand
 * @s2: second operand
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
int len_one, len_two;

char *holder;

int i, j;

if (s1 == NULL || s2 == NULL)
{
return (NULL);
}
len_one = strlen(s1);
len_two = strlen(s2);
holder = (char *) malloc((len_one + len_two  + 1) * sizeof(char));
for (i = 0; s1[i] != '\0'; i++)
{
holder[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; j++)
{
holder[j] = s2[j];
}
holder[j] = '\0';
return (holder);
}
