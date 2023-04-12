#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - entry point
 * @width: first operand
 * @height: secondoperand
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
int i, j;

if (width <= 0 || height <= 0)
{
return (NULL);
}
int width_size = malloc(width * sizeof(int));
int height_size = malloc(height * sizeof(int));
if (width_size == NULL || height_size == NULL)
{
return (NULL);
}
for (i = 0; i < height_size; i++)
{
for (j = 0; j < width_size; j++)
{
width_size[j] = 0;
}
_putchar('\n');
}
}

