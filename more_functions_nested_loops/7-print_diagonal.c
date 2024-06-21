#include "main.h"
/**
* print_diagonal - entry point
*
* Description: Prints diagonals
*@n: number of spaces
* Return: void
*/

void print_diagonal(int n)
{
int col, nl;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (col = 1; col <= n; col++)
{
if (col > 1)
{
for (nl = 1; nl <= col - 1; nl++)
{
_putchar(' ');
}
}
_putchar('\\');
_putchar('\n');
}
}
}
