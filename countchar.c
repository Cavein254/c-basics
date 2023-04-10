#include <stdio.h>

/**
 * main - count the number od integers input by user
 *
 * Return: 0 for success
 */
int main(void)
{
    long nc;
    nc = 0;

    while (getchar() != EOF)
        ++nc;
    printf("@d\n", nc);
}
