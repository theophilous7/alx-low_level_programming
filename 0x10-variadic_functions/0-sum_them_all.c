#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - entry point
 * @n: only operand
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, total, sum = 0;
va_list args;

if (n == 0)
{
return (0);
}
va_start(args, n);
for (i = 0; i < n; i++)
{
total = va_arg(args, int);
sum += total;
}
return (sum);
}

