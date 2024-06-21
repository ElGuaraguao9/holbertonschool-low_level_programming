#include "main.h"
/**
* print_triangle - entry point
*
* Description: Prints diagonals
*@size: size of the triangle
* Return: void
*/

void print_triangle(int size)
{
int col, x, esp;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (col = 1; col <= size; col++)
{
for (esp = size - col; esp >= 1; esp--)
{
_putchar(' ');
}
for (x = 1; x <= col; x++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
