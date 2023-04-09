#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: frist operand
 * @argv: second operand
 * Return: integer (success)
 */
int main(int argc, char *argv[])
{
int first, second, result;

if (argc < 2 || argc > 2)
{
printf("Error\n");
return (1);
}
first = atoi(argv[1]);
second = atoi(argv[2]);
result = first *second;
printf("%d\n", result);
return (0);
}
