#include "main.h"
/**
*_strlen - returns the length of a string
*@s: tested string
*return: the length of the string
*/
int _strlen(char *s)
{
int cua;
cua = 0;
while (*(s + cua) != '\0')
{
cua++;
}
return (cua);
}
