#include "main.h"
/**
* more_numbers - entry point
*
* Description: Prints the numbers with _putchar
*
* Return: void
*/

void more_numbers(void)
{
int n, tens, units, col;
for (col = 1; col <= 10; col++)
{
for (n = 0; n <= 14; n++)
{
tens = n / 10;
units = n % 10;
if (n > 9)
_putchar(tens + '0');
_putchar(units + '0');
}
_putchar('\n');
}
}
