#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - entry point
 * @s1: first operand
 * @s2: second operand
 * @n: third operand
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *holder;

int len_one, len_two, total_len;

int i, j;

len_one = strlen(s1);
len_two = strlen(s2);
total_len = len_one + len_two;
holder = (char *) malloc((total_len + 1) * sizeof(char));
if (holder == NULL)
{
return (NULL);
}
if (s1 == NULL || s2 == NULL)
{
s1 = "";
s2 = "";
}
for (i = 0; i < len_one; i++)
{
holder[i] = s1[i];
}
if (n >= s2)
{
for (j = 0; j < len_two; j++)
{
holder[i + j] = s2[j];
}
}
else
{
for (j = 0; j < n; j++)
{
holder[i +j] = s2[j];
}
}
holder[i] = '\0';
}
