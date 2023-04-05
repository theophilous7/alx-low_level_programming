#include "main.h"
#include <stddef.h>
/**
 * _puts_recursion - a function that prints a set of characters
 * @s: only operand
 * Return: void
 */
void _puts_recursion(char *s)
{
int i;

i = 0;
_putchar(s[i]);
s++;
if ((int)s[i] == NULL)
{
return;
}
if (s[i] != '\0')
{
_puts_recursion((char *)s);
}
else
{
_putchar('\n');
}
}
