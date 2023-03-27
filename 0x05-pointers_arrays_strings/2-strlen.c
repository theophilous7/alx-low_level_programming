#include "main.h"
/**
 *  _strlen - this is a function that checks for length
 *  @s: only operand
 *  Return: 0 (success)
 */
int _strlen(char *s)
{
int u;

u = 0;
while(s[u] != '\0')
{
u++;
}
return (u);
}
