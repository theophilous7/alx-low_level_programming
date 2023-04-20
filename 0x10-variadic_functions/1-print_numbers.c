#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers - entry point
 * @separator: first operand
 * @n: second operand
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int num, i;
va_list args;
va_start(args, n);
for (i = 1; i <= n; i++)
{
num = va_arg(args, int);
printf("%d", num);
if (i != n && separator!= NULL)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}

