#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{char ltr;

	ltr = 'z';

while (ltr >= 'a')
{putchar(ltr);
	ltr--;
}
putchar('\n');
return (0);
}
