#include "function_pointers.h"
/**
 * print_name - entry point
 * @name: first operand
 * @f: second operand
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (f && name)
{
f(name);
}
}
