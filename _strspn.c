#include <stdio.h>
int _strspn(char *s, char *accept);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s:the initial string
 * @accept: the number of bytes to be returned
 *
 * Return: size of accept
 */
int _strspn(char *s, char *accept)
{
        int count = 0;
        int i = 0;
        int j = 0;

        while (s[i] != '\0')
        {
               for (j = 0; accept[j] != '\0'; j++)
               {
                if (s[i] == accept[j])
                {
                        count++;
                }
                
               }
               i++;
        }
        return (count - 2);
}