#include <stdio.h>

int main() {
    char *names[] = {"miller", "jones","Anderson"};
    int *pi;
    int num = 10;
    pi = &num;
   // printf("%c\n", *(*(names+1)+2));
   // printf("%c\n", names[1][2]);
    
    //printf("inter pi address is garbage %p \n", &pi);
    //printf("inter pi value is : %p \n", *pi);
    printf("The address of pi is %d \n", &pi);
    printf("The value of pi is %d \n", pi);

    return 0;
}
