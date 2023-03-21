#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints lowercase alphabets
 * @parameter: void print_alphabet(void);
 *Return: 0 (success)
 */
void print_alphabet(void);
void print_alphabet(void)
{
for (char ltr = 97; ltr < 123; ltr++)
	{putchar(ltr);
	}
	putchar('\n');
}
int main(void)
{print_alphabet();
return (0);
}
