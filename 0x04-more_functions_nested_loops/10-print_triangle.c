#include "main.h"
/**
 *  print_triangle - entry point
 *  @size: only operand
 *  Return: 0 (succes)
 */
void print_triangle(int size)
{
int i, d, j;

size  = 2;
for (i = 1; i <= size; i++)
{
for (j = i; j < size; j++)
{
_putchar('.');
}
for (d = 0; d < i; d++)
{
_putchar('$');
}
_putchar('\n');
}
}
