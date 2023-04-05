#include "main.h"
/**
 * _strlen_recursion - a function that returns the lenght of the string
 * @s: the only operand
 * Return: integer
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
