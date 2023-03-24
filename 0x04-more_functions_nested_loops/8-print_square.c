#include "main.h"
/**
 * print_square - entry point
 * @size: only operand
 * Return: 0 (success)
 */
void print_square(int size)
{
int i, j;

if (size != 0 && size > 0)
{
for (i = 0; i <= size; i++)
{
for (j = 0; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
_putchar('\n');
}
