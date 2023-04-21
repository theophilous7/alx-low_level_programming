#include "function_pointers.h"
#include "3-op_functions.c"
#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - entry point
 * @s: only operand
 * Return: integer
 */
int (*get_op_func(char *s))(int, int)
{
int i;
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

while (ops[i].op)
{
if (*(ops[i].op) == *s)
{
return (ops[i].f);
i++;
}
}
return (NULL);
}

