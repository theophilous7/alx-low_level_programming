#include "main.h"
/**
 * factorial - returns factorial of a number
 * @n: only oprerand
 * Return: integer
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (n * int factorial(n-1));
}
}
