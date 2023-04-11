#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - entry point
 *@size: first operand
 *@c: second operand
 *Return: pointer
 */
char *create_array(unsigned int size, char c)
{
char *arr = NULL;

unsigned int i;

if (size == 0)
{
return (NULL);
}
*arr =  malloc(size + 1  * sizeof(char));
while (i < size + 1)
{
arr[i] = c;
i++;
}
arr[i] = '\0';
return (arr);
}
