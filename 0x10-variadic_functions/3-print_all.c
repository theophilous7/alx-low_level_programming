#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
/**
 * print_all - entry point
 * @format: only operand
 */
void print_all(const char * const format, ...)
{
int j = 0;
int len;
va_list args;

len = strlen(format);
va_start(args, format);
if (format[j] >= 'a' && format[j] <= 'z')
{
while (j < len)
{
switch (format[j])
{
case 'c':
	printf("%s", va_arg(args, char*));
	break;
case 'i':
	printf("%d", va_arg(args, int));
	break;
case 'f':
	printf("%f", va_arg(args, double));
	break;
case 's':
	printf("%s", va_arg(args, char*));
	break;
}
j++;
}
}
if (format == NULL)
{
printf("(nil)");
}
printf("\n");
va_end(args);
}
