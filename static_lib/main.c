#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include "mathtest.h" //static library

int main(void)
{
    time_t t;
    srand((unsigned) time(&t));
    long long rNuma = rand();
    long long rNumb = rand();

    long int answer;
    answer = add_numbers(rNuma, rNumb);
    printf("%d + %d = %d \n", rNuma, rNumb, answer);

    answer = subtract_numbers(rNuma, rNumb);
    printf("%d - %d = %d \n", rNuma, rNumb, answer);


    return 0;
}