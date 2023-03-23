#include "main.h"
/**
 * print_line - entry point
 * @n: new
 * Return: 0 (success)
 */
void print_line(int n)
{
int i;

n = 0;


if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
