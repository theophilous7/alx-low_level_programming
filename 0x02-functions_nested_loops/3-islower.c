#include "main.h"
/**
 * _islower - is a function that checks for lowercase
 * @c: this is a parameter of _islower
 * Return: 0 (success)
 */
int _islower(int c)
{
if (c >= 97 && c <= 123)
{
return (1);
}
return (0);
}
