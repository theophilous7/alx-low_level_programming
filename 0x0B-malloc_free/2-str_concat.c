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
int len_one, len_two, total_len;

char *holder;

int i, j;

if (s1 == NULL || s2 == NULL)
{
return (NULL);
}
len_one = strlen(s1);
len_two = strlen(s2);
total_len = len_one + len_two;
holder = (char *) malloc((total_len  + 1) * sizeof(char));
if (holder == NULL)
{
return (NULL);
}
for (i = 0; i < len_one; i++)
{
holder[i] = s1[i];
}
for (j = 0; j < len_two; j++)
{
holder[i + len_one] = s2[j];
}
holder[i] = '\0';
return (holder);
}
