#include "main.h"
/**
 * _strstr - a function that returns a substring
 * @haystack: first operand
 * @needle: second operand
 * Return: 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{       
int i, k;

for (i = 0; haystack[i] != '\0'; i++)
{
while (needle[k] != '\0' && haystack[i] == needle[k])
{
i++;
j++;
}
if (needle[k] != '\0')
{
return (char *)&needle[i];
}
}
return NULL;
}
