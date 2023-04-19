#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - entry point
 * @array: first
 * @size: second
 * @action: third
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
