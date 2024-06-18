#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n <= 0.0)
    {
        if
            printf("You entered a negative number.");
    }
    else
        printf("You entered a positive number.");
    return (0);
}