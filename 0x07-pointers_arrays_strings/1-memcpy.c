#include "main.h"
/**
 * *_memcpy - entry point
 * @dest: first operand
 * @src: second operand
 * @n: third operand
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;

for (i = 0; i < n; i++)
{
*dest[i] = *src[i];
}
}
