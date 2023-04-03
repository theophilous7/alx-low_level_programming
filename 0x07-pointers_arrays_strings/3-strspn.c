#include "main.h"
/**
 * _strspn - entry point
 * @s: first operand
 * @accept: second operand
 * Return: 0 (succeess)
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;

for (i = 0; str1[i]; i++)
{
for (j = 0; str2[j]; j++)
{
if (str1[i] == str2[j])
break;
}
if (!str2[j])
break;
}
return (i);
}
