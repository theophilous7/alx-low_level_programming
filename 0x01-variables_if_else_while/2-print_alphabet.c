#include <stdio.h>
/**
 * main - A program that prints alphabets in new line
 * Return: 0 (success)
 */
int main(void)
{char c;

	c = 'a';

	while (c <= 'z')
	{putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
