#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * @a: first operand
 * @b: second operand
 * Return: integer
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * @a: first operand
 * @b: second operand                                  * Return: integer
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * @a: first operand
 * @b: second operand                                  * Return: integer
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * @a: first operand
 * @b: second operand                                  * Return: integer
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * @a: first operand
 * @b: second operand                                  * Return: integer
 */
int op_mod(int a, int b)
{
return (a % b);
}
