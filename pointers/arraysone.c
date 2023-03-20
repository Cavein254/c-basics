/*
 * This shows pointer arithmetics applied to arrays
 */
#include <stdio.h>

int main ()
{
    //Declare an array
    int v[3] = { 10, 100, 200};

    // Declare pointer variable
    int *ptr;

    //Assign the address of [0] to ptr
    ptr = v;

    for (int i = 0; i < 3; i ++ ) {
        //print value at address which is stored in ptr
        printf("Value of *ptr = %d \n", *ptr);

        //print value of ptr
        printf("Value of ptr = %p \n", ptr);

        ptr++;
    }
    return 0;
}

