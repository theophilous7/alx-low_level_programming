#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - entry point
 * @separator: first operand
 * @n: second operand
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *string;
va_list args;

va_start(args, n);
for (i = 1; i <= n; i++)
{
string  = va_arg(args, char*);
printf("%s", string);
if (i != n && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
