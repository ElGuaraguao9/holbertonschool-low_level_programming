#include "main.h"
/**
* _strlen - return value
* @s: tested string
* return: total legth
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
