#include "main.h"
/**
 * factorial - returns factorial of a number
 * @n: only oprerand
 * Return: integer
 */
int factorial(int n)
{
if (n == 1)
{
return (1);
}
else
{
return (n * factorial(n-1));
}
}
