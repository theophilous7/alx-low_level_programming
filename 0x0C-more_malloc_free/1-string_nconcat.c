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

unsigned int len_one, len_two, total_len;

len_one = strlen(s1);
len_two = strlen(s2);
total_len = len_one + len_two;
if (n >= len_two)
{
n = len_two;
}
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
memcpy(holder, s1, len_one);
memcpy(holder + len_one, s2, n);
holder[n] = '\0';
return (holder);
}
