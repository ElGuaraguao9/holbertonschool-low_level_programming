#include <stdio.h>
/*
*main - Prints
*
*Return: Always 0 (Success)
*/
int main(void)
{
char ElInt;
int ElFloat;
long int ElLong;
long long int ElLonlon;
float Elfloat;

printf("Size of a char: %d byte(s)\n", sizeof(ElInt));
printf("Size of an int: %d byte(s)\n", sizeof(ElFloat));
printf("Size of a long int: %d byte(s)\n", sizeof(ElLong));
printf("Size of a long long int: %d byte(s)\n", sizeof(ElLonlon));
printf("Size of a float: %d byte(s)\n", sizeof(Elfloat));
return (0);
}
