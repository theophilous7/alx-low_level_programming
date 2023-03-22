#include "main.h"
/**
 * _isalpha - This is a function that prints c
 * @c: this is an operand for _isalpha function
 * Return: 0 (success)
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{return (1);
	}
return (0);
}
