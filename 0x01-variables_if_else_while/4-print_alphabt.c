#include <stdio.h>
/**
 * main - Entry point
 * This is a program that prints alphabets except q and e
 * Return: 0 (succes)
 */
int main(void)
{char bng;

	bng = 'a';

	while (bng <= 'z')
	{
		if (bng != 'e' && bng != 'q')
		{putchar(bng);
		}
	bng++;
	}
return (0);
}
