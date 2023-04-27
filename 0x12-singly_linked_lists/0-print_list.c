#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * print_list - entry point
 * @h: only operand
 * Return: integer
 */
size_t print_list(const list_t *h)
{
size_t i;

i = 0;
while (h != NULL)
{
if (h->str != NULL)
{
printf("[%d] %s\n", h->len, h->str);
}
else
{
printf("[0] (nil)\n");
}
h = h->next;
i++;
}
return (i);
}
