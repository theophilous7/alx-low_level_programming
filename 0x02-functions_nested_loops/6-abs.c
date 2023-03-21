#include "main.h"
/**
 * _abs - prints absolute value of a number
 * @int: this is an operand
 * Return: int
 */
int _abs(int)
{int n;

if (n < 0)
{n = -1 * n;
_putchar(n);
}
if (n ==  0)
{n = 0;
_putchar(n);
}
if (n > 0)
{n = 1 * n;
_putchar(n);
}
return (0);
}
