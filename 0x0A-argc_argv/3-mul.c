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
int first, second;

if (argc < 2)
{
printf("Error\n");
return (1);
}
first = atoi(argv[1]);
second = atoi(argv[2]);
return (first *second);
}
