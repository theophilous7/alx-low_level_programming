#include <stdio.h>
/**
 * main - entry point
 * @argc: first operand
 * @argv: second operand
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
