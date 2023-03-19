#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{int num;

	num = 48;

	while (num <= 57)
	{putchar(num);
		num++;
		if (num <= 57)
			putchar(',');
		if (num <= 57)
			putchar(' ');
	}
putchar('\n');
return (0);
}
