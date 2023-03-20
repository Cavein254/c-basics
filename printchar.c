#include <stdio.h>

/**
 * main - Get characters from user
 * EOF is ctl + z in c
 * Return - 0 for success
 */
int main(void)
{
    int c;
    while ((c = getchar()) != EOF)
        putchar(c);
}
