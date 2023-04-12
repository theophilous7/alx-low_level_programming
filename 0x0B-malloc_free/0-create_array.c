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
char *arr;

unsigned int i;

if (size == 0)
{
return (NULL);
}
arr = (char *)malloc((size)  * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
free(arr);
}
