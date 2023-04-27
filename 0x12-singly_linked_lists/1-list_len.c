#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - entry point
 * @h: only operand
 * Return: integer
 */
size_t list_len(const list_t *h)
{
size_t i;

i = 0;
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
