#include "main.h"
/**
 * _memset - this is a function that copies value to a block of memory
 * @s: first operand
 * @b: second operand
 * @n: third operand
 * Return: 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{       
unsigned int i;  

for (i = 0; i < n; i++)
{
s[i] = b;
for (i= 0; i < n; i++)
{
_putchar(s[i]);
}
}
return (0);
}
