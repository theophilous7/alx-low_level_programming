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

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (!str2[j])
break;
}
return (i);
}
