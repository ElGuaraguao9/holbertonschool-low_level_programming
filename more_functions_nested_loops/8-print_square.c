#include "main.h"
/**
* print_square - entry point
*
* Description: Prints square
*@size: size of square
* Return: void
*/

void print_square(int size)
{
int linea, bloke;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (linea = 1; linea <= size; linea++)
{
for (bloke = 1; bloke <= size; bloke++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
