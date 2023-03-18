/*
 * Pointer to illustrate use of pointers
 */
#include <stdio.h>

void greek()
{
    int var = 20;

    //declare pointer variable
    int *ptr;

    ptr = &var;
    
    printf("Value at ptr = %p \n", ptr);
    printf("Value at var = %d \n", var);
    printf("Value at *ptr = %d \n", *ptr);
}

int main ()
{
    greek();
    return 0;
}

