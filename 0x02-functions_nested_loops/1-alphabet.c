#include "main.h"
/**
 * main - Entry point
 * Description: A program that prints lowercase alphabets
 * @void: void returns nothing
 * print_alphabet(): print_alphabet() returns nothing too
 *Return: 0 (success)
 */
void print_alphabet(void)
{
for (char ltr = 97; ltr < 123; ltr++)
	{_putchar(ltr);
	}
	_putchar('\n');
}
int main(void)
{print_alphabet();
return (0);
}
