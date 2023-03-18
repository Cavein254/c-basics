/*
 * This function prints the value 
 * and address of a variable and pointer
 */
#include <stdio.h>

int main() {
    int num = 0;
    int *pi = &num;

    printf("Address of number %d  -- value %d \n", &num, num);
    printf("Address of pi %d  -- value %d \n", &pi, pi);
}

