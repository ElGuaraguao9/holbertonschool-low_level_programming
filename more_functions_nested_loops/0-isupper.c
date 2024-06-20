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
_putchar(c);
return 1;
}
_putchar(c);
return 0;
}
