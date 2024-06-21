#include "main.h"
/**
 * print_most_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */

void print_most_numbers(void)
{
int x;
for (x = '0'; x <= '9'; x++)
{
if (x == '2' || x == '4');
else
_putchar(x);
}
_putchar('\n');
}
