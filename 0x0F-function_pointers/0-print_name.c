#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - entry point
 * @name: first operand
 * @f: second operand
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (f ==  NULL)
{
return;
}
f(name);
}
