#include "function_pointers.h"
#include "3-get_op_func.c"
#include "3-op_functions.c"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * main - entry point
 * @argc: first operand
 * @argv: second operand
 * Return: integer
 */
int main(int argc, char *argv[])
{
int num1, num2, result = 0;
char *operator;

operator = argv[2];
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if ((argc != 4))
{
printf("Error\n");
exit(98);
}
if (operator != '+' || operator != '-' || operator != '*' || operator != '/' || operator != '%'))
{
printf("Error\n");
exit(99);
}
if ((operator == '/' && num2 == 0) || (operator == '%' && num2 == 0))
{
printf("Error\n");
exit(100);
}
result = get_op_func(operator)(num1,num2);
return (result);
