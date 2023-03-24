#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
int a;

for (a = 1; a <= 100; a++)
{
if ((a % 5 == 0 && a % 3 == 0) && a != 0)
{
char bth[] = "FizzBuzz";
int t;

for (t = 0; t <= 8; t++)
{
putchar(bth[t]);
}
}
else if (a % 3 == 0 && a != 0)
{
char fiz[] = "Fizz";
int f;

for (f = 0; f <= 4; f++)
{
putchar(fiz[f]);
}
}
else if (a % 5 == 0 && a != 0)
{
char buz[] = "Buzz";
int b;

for (b = 0; b <= 4; b++)
{
putchar(buz[b]);
}
}
else
{
printf("%d", a);
putchar(' ');
}
}
return (0);
}
