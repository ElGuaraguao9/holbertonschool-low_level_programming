#include "main.h"
/**
* swap_int - swap pointers a and b
* return 0
*@a: pointer 
*@b: pointer 
*/

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
