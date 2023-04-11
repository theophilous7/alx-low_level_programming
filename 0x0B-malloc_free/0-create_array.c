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
arr = (char *)malloc(size  * sizeof(char));
while (i < size)
{
arr[i] = c;
i++;
}
free(arr);
return (arr);
}
