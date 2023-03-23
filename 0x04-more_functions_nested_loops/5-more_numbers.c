#include "main.h"
/**
 * more_numbers - entry point
 * Return: void
 */
void more_numbers(void)
{
char num[] = "01234567891011121314";
int a, b;

for (a = 0; a < 10; a++)
{
for (b = 0; b < 20; b++)
{putchar(num[b]);
}
putchar('\n');
}
}
