#include "main.h"
/**
 * _abs - prints absolute value of a number
 * @n: this is an operand
 * Return: int
 */
int _abs(int n)
{
if (n < 0)
{int conv = n * (-1);
_putchar(conv);
}
if (n == 0)
{
_putchar(n);
}
if (n > 0)
{_putchar(n);
}
return (0);
}
