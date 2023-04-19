#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - entry point
 * @array: first
 * @size: second
 * @cmp: third
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (cmp == NULL)
{
return;
}
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) == array[i])
{
return (i);
}
else
{
return (-1);
}
}
return (0);
}
