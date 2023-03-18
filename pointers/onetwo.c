#include <stdio.h>

int main()
{
    int x = 10;
    int * ptr;

    ptr = &x;

    printf("The address of x is %p \n", &x);
    printf("The address of ptr is %p \n", &x);
}

