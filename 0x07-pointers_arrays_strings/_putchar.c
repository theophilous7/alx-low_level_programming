#include <unistd.h>
/**
 * _putchar - entry point
 * @n: only operand
 */
void _putchar(int n)
{
write(1, &n, 1);
}
