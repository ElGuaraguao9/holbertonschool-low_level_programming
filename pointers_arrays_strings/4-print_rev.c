#include "main.h"
/**
 * print_rev - prints in reverse a string.
 * @s: tested string
 * Return: always 0.
 */
void print_rev(char *s)
{
int cua;
cua = 0;
while (*(s + cua) != '\0')
{
cua++;
}
cua = cua - 1;
while (cua >= 0)
{
_putchar(*(s + cua));
cua--;
}
_putchar('\n');
}
