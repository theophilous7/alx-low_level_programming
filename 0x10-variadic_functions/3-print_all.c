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
char *string;
va_list args;

len = strlen(format);
va_start(args, format);
if (format[j] >= 97 && format[j] <= 123)
{
while (j < len)
{
switch (format[j])
{
case 'c':
	string = va_arg(args, char*);
	printf("%s", string);
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
va_end(args);
}
