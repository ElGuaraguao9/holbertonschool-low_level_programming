#include "main.h"
/**
 * print_line - entry point
 *
 * Description: Prints lines
 *@n: number of lines
 * Return: void
 */

void print_line(int n)
{
int nl;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (nl = 1; nl <= n; nl++)
{
_putchar('_');
}
_putchar('\n');
}
}
