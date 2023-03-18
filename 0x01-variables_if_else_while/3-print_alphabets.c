#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{char c[3];

c[0] = 'a';

c[1] = 'A';

if (c[0] <= 'z')
{
while (c[0] <= 'z')
	{putchar(c[0]);
		c[0]++;
	}
}
putchar('\n');
if (c[1] <= 'Z')
{
while (c[1] <= 'Z')
	{putchar(c[1]);
		c[1]++;
	}
}
return (0);
}
