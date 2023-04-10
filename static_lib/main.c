#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include "mathtest.h"

int main(void)
{
    time_t t;
    srand((unsigned) time(&t));
    long int rNuma = rand();
    long int rNumb = rand();

    long int answer;
    answer = add_numbers(rNuma, rNumb);
    printf("%d + %d = %d", rNuma, rNumb, answer);

    answer = subtract_numbers(rNuma, rNumb);
    printf("%d - %d = %d", rNuma, rNumb, answer);
}