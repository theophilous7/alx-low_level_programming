#include "main.h"
/**
 *print_diagonal - entry point
 *@n: only operand
 *Return: 0 (success)
 */
void print_diagonal(int n)
{
int i;

for (i = 0; i <= n; i++)
{
_putchar(' ');
}
if (n > 0)
{
_putchar('\\');
}
_putchar('\n');
}
