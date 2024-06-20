#include "main.h"
/**
* _isupper - checks
*
* Return: 1 if c is uppercase, 0 otherwise
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
_putchar(58);
_putchar(32);
return (1);
}
_putchar(58);
_putchar(32);
return (0);
}
