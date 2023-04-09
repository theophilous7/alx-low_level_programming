#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: first operand
 * @argv: secon operand
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
if (argc == 1)
{
printf("0\n");
}
if (argc < '48' && argc > '57')
{
printf("Error\n");
return (1);
}
int first, second, result;

first = atoi(argv[1]);
second = atoi(argv[2]);
result = first +second;
printf("%d\n", result);
return (0);
}

