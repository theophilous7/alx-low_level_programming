#include <unistd.h>

/**
 * _putchar - Entry point
 * @c: character to print
 * Return: 0 (success)
 * On error, -1 is returned, and errno is set appropriately;
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
