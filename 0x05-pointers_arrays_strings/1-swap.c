#include "main.h"
/**
 * swap_int - this function swaps two variables
 * @a: first operand
 * @b: second operand
 * Return: (0) sucess
 */
void swap_int(int *a, int *b)
{
int *tmp = 0;

*tmp = *a;
*a = *b;
*b = *tmp;
}
