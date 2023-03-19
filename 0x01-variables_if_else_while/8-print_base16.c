#include <stdio.h>
/**
 * main - Entry point
 * A program that prints hexadecimal values
 * Return: 0 (success)
 */
int main(void)
{int num;

int alp;

	num = 48;

	alp = 97;
	while (num <= 57)
	{putchar(num);
		num++;
	}
	while (alp <= 102)
	{putchar(alp);
		alp++;
	}
putchar('\n');
return (0);
}
