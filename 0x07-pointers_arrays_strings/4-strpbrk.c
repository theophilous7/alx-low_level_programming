#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - entry point
 * @s: first operand
 * @accept: second operand
 * Return: 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
const char *p;

const char *a;

for (p = s; *p != '\0'; ++p)
{
for (a = accept; *a != '\0'; ++a)
{
if (*p == *a)
{
return ((char *) p);
}
}
}
return (NULL);
}
