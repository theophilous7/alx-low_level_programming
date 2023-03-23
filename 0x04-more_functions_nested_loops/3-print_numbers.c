#include "main.h"
/**
 * print_numbers - Entry point
 * Return: void
 */
void print_numbers(void)
{
int num[] = "0123456789";

int i;

for (i = '0'; i <= '9'; i++)
{
_putchar(num[i]);
}
_putchar('\n');
}

